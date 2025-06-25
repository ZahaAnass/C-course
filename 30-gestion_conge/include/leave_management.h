#ifndef LEAVE_MANAGEMENT_H
#define LEAVE_MANAGEMENT_H

#include "leave_request.h"
#include "manager.h"

#define MAX_REQUESTS 100
#define MAX_MANAGERS 10

typedef struct LeaveManagement {
    LeaveRequest *requests[MAX_REQUESTS];
    Manager *managers[MAX_MANAGERS];
    int num_requests;
    int num_managers;
} LeaveManagement;

// Function declarations
void addLeaveRequest(LeaveManagement *lm, LeaveRequest *lr);
LeaveRequest** listPendingRequests(LeaveManagement *lm, int *count);
LeaveRequest** listEmployeeRequests(LeaveManagement *lm, int employee_id, int *count);
LeaveRequest* findRequestById(LeaveManagement *lm, int request_id);
LeaveRequest** listManagerTeamRequests(LeaveManagement *lm, int manager_id, int *count);
int calculateTotalLeave(LeaveManagement *lm, int employee_id);
void processLeaveRequest(LeaveRequest *request, const char *status);

#endif