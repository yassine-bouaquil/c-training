#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
 

 struct task {
	int id ; 
	char title[300];
	char description[500];
	char deadline [60];
	char status [60];
};

struct task tasklist [800];
	int  task_count= 0;
 
void affichermenu 
	printf("\n.........................menu:.............................\n");
  	printf("1-  ajouter une nouvelle tache \n");
	printf("2-  ajouter plusieur nouvelles taches\n");
	printf("3-  afficher la liste des taches \n");
	printf("4-  trier les taches par titre \n");
	printf("5-  trier les taches par deadline \n");
	printf("6-  rechercher une taches par identifiant n");
	printf("7-  rechercher un taches par titre \n");
	printf("8-  afficher les taches  \n");
	printf("9-  modifier une taches \n");
	printf("10- supprimer une taches par identifiant");
	printf("11- afficher les statistiques \n");
	printf("12- quitter \n");
}
