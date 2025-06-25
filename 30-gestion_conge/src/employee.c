#include <stdio.h>
#include <string.h>
#include "../include/employee.h"

// Create a new employee
void create_employee(Employee *e, int id, const char *first_name, const char *last_name, 
                   const char *hire_date, int leave_balance) {
    e->id = id;
    strncpy(e->first_name, first_name, 49);
    e->first_name[49] = '\0';
    strncpy(e->last_name, last_name, 49);
    e->last_name[49] = '\0';
    strncpy(e->hire_date, hire_date, 19);
    e->hire_date[19] = '\0';
    e->leave_balance = leave_balance;
}

// Print employee details
void print_employee(Employee *e) {
    printf("ID: %d\n", e->id);
    printf("Name: %s %s\n", e->first_name, e->last_name);
    printf("Hire Date: %s\n", e->hire_date);
    printf("Leave Balance: %d\n", e->leave_balance);
}
