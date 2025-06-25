#include <stdio.h>
#include <string.h>
#include "../include/manager.h"

void createManager(Manager *m, int id, const char *first_name, const char *last_name, const char *date_embauche, int solde_conge) {
    m->id = id;
    strcpy(m->employee.first_name, first_name);
    strcpy(m->employee.last_name, last_name);
    strcpy(m->employee.date_embauche, date_embauche);
    m->employee.solde_conge = solde_conge;
}

void printManager(Manager *m) {
    printf("ID: %d\n", m->id);
    printf("First Name: %s\n", m->employee.first_name);
    printf("Last Name: %s\n", m->employee.last_name);
    printf("Date Embauche: %s\n", m->employee.date_embauche);
    printf("Solde Conge: %d\n", m->employee.solde_conge);
}

void ajouterEmploye(Manager *manager, Employee *employee) {
    manager->employes[manager->nb_employes] = employee;
    manager->nb_employes++;
}

void listerEmployes(Manager *manager) {
    for (int i = 0; i < manager->nb_employes; i++) {
        printEmployee(manager->employes[i]);
    }
}

Employee* getEmployeById(Manager *manager, int id) {
    for (int i = 0; i < manager->nb_employes; i++) {
        if (manager->employes[i]->id == id) {
            return manager->employes[i];
        }
    }
    return NULL;
}

void trierEmployes(Manager *manager){
    int arr_length = manager->nb_employes;
    Employee *temp;
    for (int i = 0; i < arr_length; i++){
        for (int j = i + 1; j < arr_length; j++){
            if(strcmp(manager->employes[i]->last_name, manager->employes[j]->last_name) > 0){
                temp = manager->employes[j];
                manager->employes[j] = manager->employes[i];
                manager->employes[i] = temp;
            }
        }
    }
}