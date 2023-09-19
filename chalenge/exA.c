#include <stdio.h>

struct Personne {
    char nom[40];
    int age;
};

int main() {
    
    struct Personne personne;

    printf("Entrez le nom : ");
    scanf("%s", personne.nom);

    printf("Entrez l'âge : ");
    scanf("%d", &personne.age);

    printf("Nom : %s\n", personne.nom);
    printf("Âge : %d ans\n", personne.age);

    return 0;
}
