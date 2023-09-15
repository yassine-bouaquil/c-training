#include <stdio.h>
#include <stdlib.h>



int max(int a,int b){
if(a<=b)
return b;
else
return a;
}



int min(int a,int b){
if(a<=b)
return a;
else
return b;
}


int main(){
int a,b,c,d,minimum,maximum;
printf("Donner 4 nombres\t\n");
scanf("%d %d %d %d",&a,&b,&c,&d);


minimum=min(min(a,b),min(c,d));
maximum=max(max(a,b),max(c,d));
printf("le maximum de ces nombres est \t%d\n",maximum);
printf("le minimum de ces nombres est \t%d\n",minimum);
}
