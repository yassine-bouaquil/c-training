#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

struct task {
    int id;
    char titre[300];
    char description[500];
    char deadline[60];
    char status[60];
};

struct task taskList[800];
int task_count = 0;

void affichermenu() {
    printf("\n.........................menu:.............................\n");
    printf("1-  ajouter une nouvelle tache\n");
    printf("2-  ajouter plusieur nouvelles taches\n");
    printf("3-  afficher la liste des taches\n");
    printf("4-  trier les taches par titre\n");
    printf("5-  trier les taches par deadline\n");
    printf("6-  rechercher une taches par identifiant\n");
    printf("7-  rechercher un taches par titre\n");
   
    printf("8-  modifier une taches\n");
    printf("9- supprimer une taches par identifiant\n");
    printf("10- afficher les statistiques\n");
    printf("11- quitter\n");
}

int main() {
    int choix;

    while (1) {
        affichermenu();
        printf("Choisissez votre opération : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                addtask();
                break;
            case 2:
               addplustask();
                break;
            case 3:
                affichetasks();
                break;
            case 4:
                sorttasksbyTitre();
                break;
            case 5:
                afficherStatistiques();
                break;
            case 6:
                rechercherTacheParIdentifiant();
                break;
            case 7:
                rechercherTacheParTitre();
                break;
            case 8:
                modifierTache();
                break;
            case 9:
                supprimerTacheParIdentifiant();
                break;
            case 10:
                afficherStatistiques();
                break;
            case 11:
                printf("Êtes-vous sûr de vouloir quitter ? (Oui/Non) : ");
                char reponse[3];
                scanf(" %2s", reponse);
                if (strcasecmp(reponse, "Oui") == 0 || strcasecmp(reponse, "Yes") == 0) {
                    printf("Merci !\n");
                    exit(0);
                    // return 0; 
                } else {
                    printf("Opération annulée.\n");
                }
                break;
            default:
                printf("Choix invalide. Veuillez entrer un numéro valide.\n");
        }
    }

    return 0;
}

void addtask() {
    if (task_count < 800) {
        struct task nouveltask;
        nouveltask.id = task_count + 1;

        printf("Nom de la tache : ");
        scanf(" %[^\n]", nouveltask.titre);

        printf("Description de la tache : ");
        scanf(" %[^\n]", nouveltask.description);

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
void addplustask(){
    int x ;
    printf("entrez le nombre des taches que vous voulais :");
    scanf("%d",&x);
    for(int i=0; i<=x ; i++){
      addtask();  
      }
}

void sorttasksbyTitre() {
    for (int i = 0; i < task_count - 1; i++) {
        for (int j = 0; j < task_count - i - 1; j++) {
            if (strcmp(taskList[j].titre, taskList[j + 1].titre) > 0) {
             
                struct task temp = taskList[j];
                taskList[j] = taskList[j + 1];
                taskList[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < task_count; i++) {
        printf("ID : %d\n", taskList[i].id);
        printf("Titre : %s\n", taskList[i].titre);
        printf("Description : %s\n", taskList[i].description);
        printf("Deadline : %s\n", taskList[i].deadline);
        printf("Statut : %s\n", taskList[i].status);
        printf("-----------------------------\n");
    }
}

void affichetasks() {
    if (task_count == 0) {
        printf("Aucune tache enregistrée pour le moment.\n");
       
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

void rechercherTacheParIdentifiant() {
    int idRecherche;
    printf("Entrez l'identifiant de la tâche que vous souhaitez rechercher : ");
    scanf("%d", &idRecherche);

    for (int i = 0; i < task_count; i++) {
        if (taskList[i].id == idRecherche) {
            printf("Tâche trouvée :\n");
            printf("ID : %d\n", taskList[i].id);
            printf("Titre : %s\n", taskList[i].titre);
            printf("Description : %s\n", taskList[i].description);
            printf("Deadline : %s\n", taskList[i].deadline);
            printf("Statut : %s\n", taskList[i].status);
        
        }
    }

    printf("Aucune tâche avec cet identifiant n'a été trouvée.\n");
}

void rechercherTacheParTitre() {
    char titreRecherche[300];
    printf("Entrez le titre de la tâche que vous souhaitez rechercher : ");
    scanf(" %[^\n]", &titreRecherche);

    printf("Tâches trouvées par titre :\n");

    for (int i = 0; i < task_count; i++) {
        if (strcmp(taskList[i].titre, titreRecherche) == 0) {
            printf("ID : %d\n", taskList[i].id);
            printf("Titre : %s\n", taskList[i].titre);
            printf("Description : %s\n", taskList[i].description);
            printf("Deadline : %s\n", taskList[i].deadline);
            printf("Statut : %s\n", taskList[i].status);
            printf("-----------------------------\n");
        }
    }
}

void modifierTache() {
    int idModification;
    printf("Entrez l'identifiant de la tâche que vous souhaitez modifier : ");
    scanf("%d", &idModification);

    for (int i = 0; i < task_count; i++) {
        if (taskList[i].id == idModification) {
            printf("Tâche trouvée :\n");
            printf("ID : %d\n", taskList[i].id);
            printf("Titre : %s\n", taskList[i].titre);

            printf("Options de modification :\n");
            printf("1. Modifier la description\n");
            printf("2. Modifier le statut\n");
            printf("3. Modifier le délai\n");
            printf("4. Annuler la modification\n");

            int choixModification;
            printf("Choisissez l'option de modification : ");
            scanf("%d", &choixModification);

            switch (choixModification) {
                case 1:
                    printf("Nouvelle description : ");
                    scanf(" %[^\n]", taskList[i].description);
                    printf("Description modifiée avec succès.\n");
                    break;
                case 2:
                    printf("Nouveau statut : ");
                    scanf(" %[^\n]", taskList[i].status);
                    printf("Statut modifié avec succès.\n");
                    break;
                case 3:
                    printf("Nouveau délai (YYYY-MM-DD) : ");
                    scanf(" %[^\n]", taskList[i].deadline);
                    printf("Délai modifié avec succès.\n");
                    break;
                case 4:
                    printf("Modification annulée.\n");
                    break;
                default:
                    printf("Option de modification invalide.\n");
            }
            
        }
    }

    printf("Aucune tâche avec cet identifiant n'a été trouvée.\n");
}

void supprimerTacheParIdentifiant() {
    int idSuppression;
    printf("Entrez l'identifiant de la tâche que vous souhaitez supprimer : ");
    scanf("%d", &idSuppression);

    int indexTacheASupprimer = -1;

    for (int i = 0; i < task_count; i++) {
        if (taskList[i].id == idSuppression) {
            indexTacheASupprimer = i;
            break;
        }
    }

    if (indexTacheASupprimer != -1) {
        for (int i = indexTacheASupprimer; i < task_count - 1; i++) {
            taskList[i] = taskList[i + 1];
        }
        task_count--;
        printf("Tâche supprimée avec succès.\n");
    } else {
        printf("Aucune tâche avec cet identifiant n'a été trouvée.\n");
    }
}

void afficherStatistiques() {
    printf("Nombre total de tâches : %d\n", task_count);

    int tachesCompletes = 0;
    int tachesIncompletes = 0;
    time_t maintenant;
    time(&maintenant);

    for (int i = 0; i < task_count; i++) {
        struct tm dateLimite;
        memset(&dateLimite, 0, sizeof(dateLimite));
        sscanf(taskList[i].deadline, "%4d-%2d-%2d", &dateLimite.tm_year, &dateLimite.tm_mon, &dateLimite.tm_mday);
        dateLimite.tm_year -= 1900;
        dateLimite.tm_mon -= 1;
        time_t deadline = mktime(&dateLimite);

        if (difftime(deadline, maintenant) < 0) {
            tachesCompletes++;
        } else {
            tachesIncompletes++;
        }
    }

    printf("Nombre de tâches complètes : %d\n", tachesCompletes);
    printf("Nombre de tâches incomplètes : %d\n", tachesIncompletes);
}
