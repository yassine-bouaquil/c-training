#include <stdio.h>
#include <stdlib.h>

int main() {
    float T[5];
    int i;
    float Notes, somme, moyen_class;

    printf("Entrez les notes des étudiants :\n");
    
    for (i = 0; i < 5; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%f", &T[i]);
    }

    somme = 0; 

    for (i = 0; i < 5; i++) {
        somme += T[i];
    }

    moyen_class = somme / 5;

    
    printf("La moyenne de la classe est : %.2f\n", moyen_class);

    return 0;
}
