#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdbool.h>

typedef struct {
    int id;
    char first_name[50];
    char last_name[50];
    char hire_date[20];
    int leave_balance;
} Employee;

// Function declarations
void create_employee(Employee *e, int id, const char *first_name, const char *last_name, 
                   const char *hire_date, int leave_balance);
void print_employee(Employee *e);
void add_employee(Employee *employees, int *num_employees, int id, 
                 const char *last_name, const char *first_name, int leave_balance);
void sort_employees(Employee *employees, int num_employees);
void display_employee(Employee *emp);
void display_all_employees(Employee *employees, int num_employees);

#endif