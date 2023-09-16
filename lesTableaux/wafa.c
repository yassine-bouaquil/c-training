#include <stdio.h>
#include <stdlib.h>


int main ()
{
float T[5];
int i;
float S,M;
for(i=0;i<5;i++)
{
printf("Donner la note d'etudiant num %d:", i+1);
scanf ("%f", &T[i]);
}

S=0;

  for(i=0;i<5;i++){
S= S + T[i];
}
M= S/5;
printf("la moyenne des notes est : %.2f ", M);


return 0;
}
