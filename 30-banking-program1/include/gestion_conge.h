#ifndef GESTION_CONGE_H
#define GESTION_CONGE_H

#include "demande_conge.h"
#include "manager.h"

typedef struct {
    Manager *managers[50];
    DemandeConge *demandes[200];
    int nb_managers;
    int nb_demandes;
} GestionConge;

void ajouterDemandeConge(GestionConge *gc, DemandeConge *dc);
DemandeConge* listeDemandeCongeEnCours(GestionConge *gc);
DemandeConge* listeDemandeParEmploye(GestionConge *gc, int id);
DemandeConge* listeDemandeParManager(GestionConge *gc, int id);
int dureeTotalConge(GestionConge *gc, int id);

#endif
