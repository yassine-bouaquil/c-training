#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    int age;
};

int main() {
    
    struct Etudiant listeEtudiants[5];
    int nombreEtudiants = 0;  

    printf("Bienvenue dans le gestionnaire d'etudiants!\n");

   
    while (nombreEtudiants < 5) {
        printf("\nEntrez le nom de l'etudiant : ");
        scanf("%s", listeEtudiants[nombreEtudiants].nom);

        printf("Entrez l'age de l'etudiant : ");
        scanf("%d", &listeEtudiants[nombreEtudiants].age);

        printf("Etudiant ajoute avec succes!\n");

        nombreEtudiants++; 
    }

    printf("\nListe des etudiants :\n");

    for (int i = 0; i < nombreEtudiants; i++) {
        printf("%d. Nom : %s, Age : %d\n", i + 1, listeEtudiants[i].nom, listeEtudiants[i].age);
    }

    return 0;
}
