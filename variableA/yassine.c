#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
int a,b;
float nouhaila;
double c;
char oper;
printf("Donner la valeur du premier nombre\t");
scanf("%d",&a);
printf("Donner le valeur de deuxieme nombre\t");
scanf("%d",&b);
printf("Donner l operation a utiliser\t");
scanf(" %c",&oper);
switch(oper){
case '+':printf("%d + %d = %d",a,b,a+b);
break;
case '-': printf("%d -%d = %d",a,b,a-b);
break;
case '*': printf("%d * %d =%d",a,b,a*b);
break;
case '/' :if(b==0){
printf("math erreur");
}else{
printf("%d / %d = %d",a,b,a/b);
}
break;
case '%' : printf("%d modulo  %d = %d",a,b,a%b);
break;
default : printf("operation non disponible");
}
}
