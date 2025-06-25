#ifndef LEAVE_REQUEST_H
#define LEAVE_REQUEST_H

#include "employee.h"

#define MAX_STATUS_LENGTH 20
#define MAX_REASON_LENGTH 200

typedef struct {
    int id;
    Employee employee;
    char start_date[20];
    char end_date[20];
    int duration;
    char status[MAX_STATUS_LENGTH];
    char reason[MAX_REASON_LENGTH];
} LeaveRequest;

// Function declarations
void create_leave_request(LeaveRequest *lr, int id, const Employee *emp, 
                        const char *start_date, const char *end_date, 
                        const char *reason);
void printLeaveRequest(const LeaveRequest *lr);
void approve_leave_request(LeaveRequest *lr);
void reject_leave_request(LeaveRequest *lr, const char *reason);
int calculate_leave_duration(const char *start_date, const char *end_date);

#endif