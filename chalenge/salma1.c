//challenge 1:
#include <stdio.h>
#include<stdlib.h>
struct Personne {
char nom[20];
int age;
};

int main(){
struct Personne personne;
printf("\nEntrez le nom :\n ");
scanf("%s", personne.nom);
printf("\nEntrez l'âge :\n ");
scanf("%d", &personne.age);
printf("\nNom : %s\n", personne.nom);
printf("\nAge : %d ans\n", personne.age);


 return 0;
}


