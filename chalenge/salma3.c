#include<stdio.h>
#include<math.h>
struct Employe{
char nom;
float salaireH;
float nombreH;
};
int main(){
struct Employe employe;
char nom;
float salaireH;
float  nombreH;
printf("\nVeuillez saisir le nom, le salaire horaire et le nombre d'heures travaillées :\n");
scanf(" %s",&employe.nom);
scanf(" %f",&employe.salaireH);
scanf(" %f",&employe.nombreH);
float salaireT = employe.salaireH * employe.nombreH ;
printf("\nLe salaire total est :%f\n",salaireT);
return 0;
}
