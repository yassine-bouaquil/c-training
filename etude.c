#include <stdio.h>

int main(){

float  note[4],som,moy;
int i;

printf("Donner les notes \t");
for(i=0;i<=4;i++){

printf("note[%d] =  ",i);

scanf("%f",&note[i]);
}


printf("\n");


som=0;
for(i=0;i<=4;i++){
som=som+note[i];
}

moy=som/5;
printf("la moyenne de notes est %.2f\n",moy);


}
