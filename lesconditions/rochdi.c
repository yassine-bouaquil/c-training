#include <stdio.h>

int main()
{
int p;
printf("donner le musure");
scanf("%d",&p);
if(p<7)
	printf("lE PH est acid");
else if (p==7)
	printf("le PH est neutre");
else
	printf("le PH est basic");
}
