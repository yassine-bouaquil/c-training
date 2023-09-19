#include <stdio.h>
#include <stdlib.h>


int main(){

int a,b,temp;


printf("\nDonner deux nombres entier a et b :\t\n");
scanf("%d %d",&a,&b);

temp=a;
a=b;
b=temp;

printf("la nouvelle valeur de a est %d et la nouvelle valeurs de b est %d\n",a,b);



}
