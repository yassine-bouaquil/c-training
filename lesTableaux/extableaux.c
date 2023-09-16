#include<stdio.h>
#include<stdlib.h>
int main(){
int notes[4],i,somme,moyenne;
printf("veuillez saisir les notes \t");
for(i=0;i<=4;i++){
printf("note[%d] =",i);
scanf("%d",&notes[i]);
}
somme=0;
for(i=0;i<=4;i++){
somme=somme+notes[i];}
moyenne=somme/5;
printf("La moyenne generale est %d \n",moyenne);
}
