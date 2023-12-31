#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
 

 struct task {
        int id ; 
        char titre[300];
        char description[500];
        char deadline [60];
        char status [60];
};

struct task taskList [800];
        int  task_count= 0;
 
void affichermenu(){ 
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


int main (){
	int choix;
	
	while (1){
	affichermenu();
	printf("choissir votre operation : ");
	scanf("%d" , &choix);
 	switch (choix) {
	case 1:
        addtask();
	break;
	case 2:
// ajouter plusieurs nouvelles tâches 
	break;
	case 3:
        affichetasks();
	break;
	case 4:
        sorttasksbyTitre();
                break;
            case 5:
//  trier les tâches par deadline ici
                break;
            case 6:
//  rechercher une tâche par identifiant ici

                break;
            case 7:
// rechercher une tâche par titre ici
                break;
            case 8:
//  afficher les tâches dont le deadline est dans 3 jours ou moins ici 
                break;
            case 9:
//  rechercher une tâche par identifiant ici
                break;
            case 10:
//  modifier une tâche ici  
                break;
            case 11:
// afficher les statistiques ici
                break;
            case 12:
                printf("Merci !\n");
                return 0; // 
            default:
                printf("Choix invalide. Veuillez entrer un numéro valide.\n");
      }
    }

    return 0;
}

 void addtask() {
	if (task_count< 800) {
	struct task nouveltask;
	nouveltask.id = task_count +1;
	
	printf("nom de  tache : ");
	scanf(" %[^\n]" ,nouveltask.titre);

	printf("description de tache : ");
	scanf(" %[^\n]" ,nouveltask.description);

	printf("description de tache : ");
        scanf(" %[^\n]" ,nouveltask.description);
 	
	printf("Date limite (YYYY-MM-DD) : ");
        scanf(" %[^\n]", nouveltask.deadline);

        printf("Statut (à réaliser/en cours de réalisation/finalisée) : ");
        scanf(" %[^\n]", nouveltask.status);

        taskList[task_count] = nouveltask;
        task_count++;
        printf("Tache ajoutee avec succes.\n");
    } else {
        printf("La liste de taches est pleine. Impossible d'ajouter plus de taches.\n");
    }
 }  
 


void sorttasksbyTitre() {
    for (int i = 0; i < task_count - 1; i++) {
        for (int j = 0; j < task_count - i - 1; j++) {
            if (strcmp(taskList[j].titre, taskList[j + 1].titre) > 0) {
                // Swap tasks
                struct task temp = taskList[j]; // Utilisez struct task ici
                taskList[j] = taskList[j + 1];
                taskList[j + 1] = temp;
            }
        }
    }
}


void affichetasks() {
    if (task_count == 0) {
        printf("Aucune tache enregistrée pour le moment.\n");
        return;
    }

    printf("Liste de toutes les taches :\n");
    for (int i = 0; i < task_count; i++) {
        printf("ID : %d\n", taskList[i].id);
        printf("Titre : %s\n", taskList[i].titre);
        printf("Description : %s\n", taskList[i].description);
        printf("Deadline : %s\n", taskList[i].deadline);
        printf("Statut : %s\n", taskList[i].status);
        printf("-----------------------------\n");
    }
}
