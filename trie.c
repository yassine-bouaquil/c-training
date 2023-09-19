#include <stdio.h>
#include <stdlib.h>

int main(){
int T[20],i,temp,j,n;

do{
 printf("\nEntrer le nombre de valeurs que vous voulez ajouter au tableau (maximum 20)\n");
scanf("%d",&n);
}while(n <=0 || n >20);

for(i=0; i < n; i++) {
printf("T[%d]  = ", i);
scanf("%d", &T[i]);
}

for(i = 0; i < n-1; i++) {
for(j = i + 1; j <n; j++) {
if(T[i] < T[j]) {
temp = T[i];
T[i] = T[j];
T[j] = temp;
}
}
}

printf("Tableau trie dans l'ordre croissant:\n");
for(i = 0; i < n; i++) {
printf("%d ", T[i]);
}
}
