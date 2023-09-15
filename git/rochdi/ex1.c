#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
if (a<b)
	return b;
else
	return a;
}


int min(int a, int b)
{
if(a<b)
	return a;
else
	return b;
}
int main() {
int a,b,c,d,minimum,maxuim;
printf("donner 4 nombres \t\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
minimum=min(min(a,b),min(c,d));
maxuim=max(max(a,b),max(c,d));
printf("\n le minimum est %d\n et le maximum est %d",minimum,maxuim);
}
