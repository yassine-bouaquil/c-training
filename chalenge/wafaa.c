#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
    char nom[10];
    float salaireh;
    int h;
    float salaireT;
}Employe;







int main(){
Employe a;
    printf("donner le nom de l'employe :");
    scanf("%s",a.nom);
        printf("donner son salaire horaire :");
    scanf("%f",&a.salaireh);

        printf("donner le nombre d heures de travaille :");
scanf("%d",&a.h);


    a.salaireT=a.h*a.salaireh;
    printf("le nom de l employe %s ",a.nom);
    printf("son salaire total est %.2f",a.salaireT);
}
