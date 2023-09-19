#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    int nbLancers = 100;
    int resultats[nbLancers];
    int sommeMinimale = 2; // 1 + 1
    int sommeMaximale = 12; // 6 + 6

    // Effectuer les 100 lancers de dés et stocker les résultats dans le tableau
    for (int i = 0; i < nbLancers; i++) {
        int de1 = rand() % 6 + 1; // Lancer du dé 1 (nombre aléatoire entre 1 et 6)
        int de2 = rand() % 6 + 1; // Lancer du dé 2 (nombre aléatoire entre 1 et 6)
        resultats[i] = de1 + de2;
    }

    // Compter le nombre de fois où on obtient la somme minimale et la somme maximale
    int compteMinimale = 0;
    int compteMaximale = 0;

    for (int i = 0; i < nbLancers; i++) {
        if (resultats[i] == sommeMinimale) {
            compteMinimale++;
        } else if (resultats[i] == sommeMaximale) {
            compteMaximale++;
        }
    }

    // Afficher les résultats
    printf("Nombre de fois où la somme minimale (1+1) a été obtenue : %d\n", compteMinimale);
    printf("Nombre de fois où la somme maximale (6+6) a été obtenue : %d\n", compteMaximale);

    return 0;
}

