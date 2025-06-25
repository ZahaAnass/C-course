#include <stdio.h>
#include <string.h>
#include <time.h>
#include "../include/leave_request.h"
#include "../include/manager.h"

#define MAX_REASON_LENGTH 200

void createLeaveRequest(LeaveRequest *lr, int id, Employee employee, 
                        const char *start_date, const char *end_date, 
                        const char *reason) {
    if (!lr || !start_date || !end_date || !reason) {
        fprintf(stderr, "Error: Invalid arguments to createLeaveRequest\n");
        return;
    }

    lr->id = id;
    lr->employee = employee;
    
    strncpy(lr->start_date, start_date, 19);
    lr->start_date[19] = '\0';
    
    strncpy(lr->end_date, end_date, 19);
    lr->end_date[19] = '\0';
    
    lr->duration = calculate_leave_duration(start_date, end_date);
    
    strncpy(lr->status, "Pending", MAX_STATUS_LENGTH - 1);
    lr->status[MAX_STATUS_LENGTH - 1] = '\0';
    
    strncpy(lr->reason, reason, MAX_REASON_LENGTH - 1);
    lr->reason[MAX_REASON_LENGTH - 1] = '\0';
}

void printLeaveRequest(const LeaveRequest *lr) {
    if (!lr) {
        printf("Invalid leave request\n");
        return;
    }
    
    printf("\n--- Leave Request #%d ---\n", lr->id);
    printf("Employee: %s %s\n", lr->employee.first_name, lr->employee.last_name);
    printf("Period: %s to %s\n", lr->start_date, lr->end_date);
    printf("Duration: %d days\n", lr->duration);
    printf("Status: %s\n", lr->status);
    printf("Reason: %s\n", lr->reason);
}

void listManagerRequests(LeaveRequest *requests, int num_requests, Manager manager) {
    printf("\n--- Team Leave Requests ---\n");
    int found = 0;
    for (int i = 0; i < num_requests; i++) {
        for (int j = 0; j < manager.num_employees; j++) {
            if (requests[i].employee.id == manager.employees[j]->id) {
                printLeaveRequest(&requests[i]);
                printf("\n");
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("No leave requests found for your team.\n");
    }
}

int getTotalLeaveDuration(LeaveRequest *requests, int num_requests, int employee_id) {
    int total = 0;
    for (int i = 0; i < num_requests; i++) {
        if (requests[i].employee.id == employee_id && 
            strcmp(requests[i].status, "Approved") == 0) {
            total += requests[i].duration;
        }
    }
    return total;
}

void processRequest(LeaveRequest* request, const char* status) {
    if (!request) return;
    strncpy(request->status, status, MAX_STATUS_LENGTH - 1);
    request->status[MAX_STATUS_LENGTH - 1] = '\0';
}

void approveLeaveRequest(LeaveRequest *lr) {
    if (!lr) return;
    
    if (lr->employee.leave_balance >= lr->duration) {
        strncpy(lr->status, "Approved", MAX_STATUS_LENGTH - 1);
        lr->status[MAX_STATUS_LENGTH - 1] = '\0';
        lr->employee.leave_balance -= lr->duration;
        printf("Leave request #%d has been approved.\n", lr->id);
    } else {
        printf("Cannot approve: Insufficient leave balance.\n");
    }
}

void rejectLeaveRequest(LeaveRequest *lr, const char *reason) {
    if (!lr || !reason) return;
    
    strncpy(lr->status, "Rejected", MAX_STATUS_LENGTH - 1);
    lr->status[MAX_STATUS_LENGTH - 1] = '\0';
    
    printf("Leave request #%d has been rejected. Reason: %s\n", lr->id, reason);
}

int calculate_leave_duration(const char *start_date, const char *end_date) {
    if (!start_date || !end_date) return 0;
    
    struct tm start_tm = {0};
    struct tm end_tm = {0};
    
    // Parse dates in format YYYY-MM-DD
    sscanf(start_date, "%d-%d-%d", 
            &start_tm.tm_year, &start_tm.tm_mon, &start_tm.tm_mday);
    sscanf(end_date, "%d-%d-%d", 
            &end_tm.tm_year, &end_tm.tm_mon, &end_tm.tm_mday);
    
    // Adjust for tm struct format (years since 1900, months 0-11)
    start_tm.tm_year -= 1900;
    start_tm.tm_mon -= 1;
    end_tm.tm_year -= 1900;
    end_tm.tm_mon -= 1;
    
    // Convert to time_t (seconds since epoch)
    time_t start = mktime(&start_tm);
    time_t end = mktime(&end_tm);
    
    if (start == -1 || end == -1) {
        fprintf(stderr, "Error: Invalid date format\n");
        return 0;
    }
    
    // Calculate difference in days
    double seconds = difftime(end, start);
    int days = (int)(seconds / (60 * 60 * 24)) + 1; // +1 to include both start and end days
    
    return (days > 0) ? days : 0;
}