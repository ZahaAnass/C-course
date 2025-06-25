// manager.h
#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

#define MAX_EMPLOYEES 10

typedef struct Manager {
    Employee employee;
    char code[10];
    Employee *employees[MAX_EMPLOYEES];
    int num_employees;
} Manager;

// Function declarations
void add_employee_to_team(Manager *m, Employee *e);
void remove_employee_from_team(Manager *m, int employee_id);
void display_team(const Manager *m);
Employee* get_employee_by_id(Manager *m, int id);
void sortEmployees(Manager *m);
void display_manager_info(const Manager *m);

#endif