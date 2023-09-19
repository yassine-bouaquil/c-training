#include<stdio.h>
#include<stdlib.h>
int main(){
int T[50],a,j,i,tmp;


printf("veuillez saisir le nombre de tables\n");
scanf("%d",&a);
for(i=0;i<a;i++){
printf("entrer un nombre :");
scanf("%d",&T[i]);
}

for(i=0;i<a;i++){
for(j=i+1;j<a;j++){
if(T[i]<T[j]){
tmp=T[j];;
T[j]=T[i];
T[i]=tmp;
}}}
printf("ces nombres sont tries par ordre decroissant\n");
for(int i=0;i<a;i++){
printf("%d\n",T[i]);}
}
