#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

typedef struct {
    int id;
    Employee employee;
    char code[10];
    Employee *employes[100];
    int nb_employes;
} Manager;

void createManager(Manager *m, int id, const char *first_name, const char *last_name, const char *date_embauche, int solde_conge);
void printManager(Manager *m);
void ajouterEmploye(Manager *manager, Employee *employee);
void listerEmployes(Manager *manager);
Employee* getEmployeById(Manager *manager, int id);
void trierEmployes(Manager *manager);

#endif
