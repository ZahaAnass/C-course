#ifndef DEMANDE_CONGE_H
#define DEMANDE_CONGE_H

#include "employee.h"
#include <stdbool.h>

typedef struct {
    int id;
    Employee employee;
    char start_date[50];
    char end_date[50];
    int duration;
    char reason[100];
    char status[50];
} DemandeConge;

void createDemandeConge(DemandeConge *dc, int id, Employee employee, const char *start_date, const char *end_date, int duration, const char *reason, const char *status);
bool validate(DemandeConge *dc);
bool reject(DemandeConge *dc);
void printDemandeConge(DemandeConge *dc);

#endif