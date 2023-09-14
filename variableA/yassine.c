#include<stdio.h>
#include<stdbool.h>

int main(){
int age=22;
float poid=77.5;
char nom[]="bouaquil";
char prenom[]="yassine";
bool est_vrai=true;
printf("\nnom=%s  ,prenom=%s  \n",nom,prenom);
printf("age=%d  ,poid=%.2f\n",age,poid);
if(est_vrai)
printf("true\n");
else
printf("false\n");

}
