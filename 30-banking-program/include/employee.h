#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef struct {
    int id;
    char first_name[50];
    char last_name[50];
    char date_embauche[50];
    int solde_conge;
} Employee;

void createEmployee(Employee *e, int id, const char *first_name, const char *last_name, const char *date_embauche, int solde_conge);
void printEmployee(Employee *e);

#endif