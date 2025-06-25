// manager.c
#include <stdio.h>
#include <string.h>
#include "../include/manager.h"

void add_employee_to_team(Manager *m, Employee *e) {
    if (!m || !e || m->num_employees >= MAX_EMPLOYEES) {
        return;
    }
    
    // Check if employee already in team
    for (int i = 0; i < m->num_employees; i++) {
        if (m->employees[i]->id == e->id) {
            printf("Employee %d is already in the team.\n", e->id);
            return;
        }
    }
    
    m->employees[m->num_employees++] = e;
    printf("Added employee %s %s to the team.\n", e->first_name, e->last_name);
}

void remove_employee_from_team(Manager *m, int employee_id) {
    if (!m || m->num_employees == 0) {
        return;
    }
    
    for (int i = 0; i < m->num_employees; i++) {
        if (m->employees[i]->id == employee_id) {
            // Shift remaining elements
            for (int j = i; j < m->num_employees - 1; j++) {
                m->employees[j] = m->employees[j + 1];
            }
            m->num_employees--;
            printf("Removed employee %d from the team.\n", employee_id);
            return;
        }
    }
    
    printf("Employee %d not found in the team.\n", employee_id);
}

void display_team(const Manager *m) {
    if (!m) return;
    
    printf("\n=== Team Members (%d/%d) ===\n", 
            m->num_employees, MAX_EMPLOYEES);
    printf("ID\tName\t\tLeave Balance\n");
    printf("-------------------------------\n");
    
    for (int i = 0; i < m->num_employees; i++) {
        if (m->employees[i]) {
            printf("%d\t%s %s\t%d days\n", 
                    m->employees[i]->id,
                    m->employees[i]->first_name,
                    m->employees[i]->last_name,
                    m->employees[i]->leave_balance);
        }
    }
}

Employee* get_employee_by_id(Manager *m, int id) {
    if (!m) return NULL;
    
    for (int i = 0; i < m->num_employees; i++) {
        if (m->employees[i] && m->employees[i]->id == id) {
            return m->employees[i];
        }
    }
    return NULL;
}

void sortEmployees(Manager *m) {
    if (!m) return;
    
    for (int i = 0; i < m->num_employees - 1; i++) {
        for (int j = 0; j < m->num_employees - i - 1; j++) {
            if (strcmp(m->employees[j]->last_name, m->employees[j + 1]->last_name) > 0) {
                Employee *temp = m->employees[j];
                m->employees[j] = m->employees[j + 1];
                m->employees[j + 1] = temp;
            }
        }
    }
}

void display_manager_info(const Manager *m) {
    if (!m) return;
    
    printf("\n=== Manager Information ===\n");
    printf("ID: %d\n", m->employee.id);
    printf("Name: %s %s\n", m->employee.first_name, m->employee.last_name);
    printf("Manager Code: %s\n", m->code);
    printf("Team Size: %d\n", m->num_employees);
}