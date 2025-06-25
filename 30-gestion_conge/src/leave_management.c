// leave_management.c
#include <string.h>
#include "../include/leave_management.h"

void addLeaveRequest(LeaveManagement *lm, LeaveRequest *lr) {
    if (!lm || !lr || lm->num_requests >= MAX_REQUESTS) {
        return;
    }
    lm->requests[lm->num_requests++] = lr;
}

LeaveRequest** listPendingRequests(LeaveManagement *lm, int *count) {
    if (!lm || !count) return NULL;
    
    static LeaveRequest *pending_requests[MAX_REQUESTS];
    int pending_count = 0;
    
    for (int i = 0; i < lm->num_requests; i++) {
        if (strcmp(lm->requests[i]->status, "Pending") == 0) {
            pending_requests[pending_count++] = lm->requests[i];
        }
    }
    
    *count = pending_count;
    return pending_count > 0 ? pending_requests : NULL;
}

LeaveRequest** listEmployeeRequests(LeaveManagement *lm, int employee_id, int *count) {
    if (!lm || !count) return NULL;
    
    static LeaveRequest *emp_requests[MAX_REQUESTS];
    int emp_count = 0;
    
    for (int i = 0; i < lm->num_requests; i++) {
        if (lm->requests[i]->employee.id == employee_id) {
            emp_requests[emp_count++] = lm->requests[i];
        }
    }
    
    *count = emp_count;
    return emp_count > 0 ? emp_requests : NULL;
}

LeaveRequest** listManagerTeamRequests(LeaveManagement *lm, int manager_id, int *count) {
    if (!lm || !count) return NULL;
    
    static LeaveRequest *team_requests[MAX_REQUESTS];
    int team_count = 0;
    
    // Find the manager
    Manager *manager = NULL;
    for (int i = 0; i < lm->num_managers; i++) {
        if (lm->managers[i]->employee.id == manager_id) {
            manager = lm->managers[i];
            break;
        }
    }
    
    if (!manager) {
        *count = 0;
        return NULL;
    }
    
    // Get all requests for the manager's team
    for (int i = 0; i < manager->num_employees; i++) {
        int emp_id = manager->employees[i]->id;
        int emp_count = 0;
        LeaveRequest **emp_requests = listEmployeeRequests(lm, emp_id, &emp_count);
        
        for (int j = 0; j < emp_count && team_count < MAX_REQUESTS; j++) {
            team_requests[team_count++] = emp_requests[j];
        }
    }
    
    *count = team_count;
    return team_count > 0 ? team_requests : NULL;
}

int calculateTotalLeave(LeaveManagement *lm, int employee_id) {
    if (!lm) return 0;
    
    int total = 0;
    for (int i = 0; i < lm->num_requests; i++) {
        if (lm->requests[i]->employee.id == employee_id && 
            strcmp(lm->requests[i]->status, "Approved") == 0) {
            total += lm->requests[i]->duration;
        }
    }
    return total;
}

LeaveRequest* findRequestById(LeaveManagement *lm, int request_id) {
    if (!lm) return NULL;
    
    for (int i = 0; i < lm->num_requests; i++) {
        if (lm->requests[i]->id == request_id) {
            return lm->requests[i];
        }
    }
    return NULL;
}

void processLeaveRequest(LeaveRequest *request, const char *status) {
    if (!request || !status) return;
    
    strncpy(request->status, status, MAX_STATUS_LENGTH - 1);
    request->status[MAX_STATUS_LENGTH - 1] = '\0';
}