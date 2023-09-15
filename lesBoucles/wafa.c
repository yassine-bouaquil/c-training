#include <stdio.h>
#include <stdlib.h>
int main () 
{
int N;
printf("veuillez enter un nombre entre 	10 et 20 :");
scanf("%d",&N);
while(N<10 || N>20) {
if (N<10){
printf(" plus  petit !\n");
}
else {
printf ("plus grand!n");}
printf("veuillez enter un nombre entre 10 et 20 :");
scanf("%d",&N);
}
printf("bravo! vous avez tape un nombre compis  entre 10 et 20:");




return 0;
}
