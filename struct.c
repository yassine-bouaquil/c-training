#include <stdio.h>

struct personne{
char nom[100];
int age;
};



int main(){

struct personne Personne;

printf("Entrer le nom :\n");
scanf(" %s",Personne.nom);


printf("Entrer l'age:\n");
scanf("%d",&Personne.age);


printf("Nom:%s\n",Personne.nom);
printf("Age:%d\n",Personne.age);



}
