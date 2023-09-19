#include <stdio.h>
#include <stdlib.h>

  typedef struct{
    char nom[10];
    int age;

}Etudiant;
    int main(){
Etudiant et[5];
int i;
for(i=0;i<5;i++){


    printf("donner le nom de l etudiant %d: ",i+1);
    scanf("%s",et[i].nom);

    printf("donner l age de l etudiant %d:",i+1);
    scanf("%d",&et[i].age);
    printf("etudiant ajouté avec succes \n");

}
 
    printf("liste des etudiants \n");
    for(i=0;i<5;i++){
        printf("%d.Nom:%s  age:%d \n",i+1,et[i].nom,et[i].age);
    }

}
