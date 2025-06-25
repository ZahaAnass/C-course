#include <stdio.h>
#include <string.h>
#include "../include/employee.h"

void createEmployee(Employee *e, int id, const char *first_name, const char *last_name, const char *date_embauche, int solde_conge) {
    e->id = id;
    strcpy(e->first_name, first_name);
    strcpy(e->last_name, last_name);
    strcpy(e->date_embauche, date_embauche);
    e->solde_conge = solde_conge;
}

void printEmployee(Employee *e) {
    printf("ID: %d\n", e->id);
    printf("First Name: %s\n", e->first_name);
    printf("Last Name: %s\n", e->last_name);
    printf("Date Embauche: %s\n", e->date_embauche);
    printf("Solde Conge: %d\n", e->solde_conge);
}
