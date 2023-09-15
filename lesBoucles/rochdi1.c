#include<stdio.h>

int main()
{
int N,i;
printf ("entre un nombre:");
scanf("%d",&N);
while(N<1 || N>46){
printf("entre un nombre:");
scanf("%d",&N);
}
i=2;
while(i<=15){
printf("%d*%d=%d \n",N,i,N*i);
i++;
}
return 0;
}
