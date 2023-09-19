#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Point {
float x1,x2,y1,y2;
//float dis;
};
int main(){

//float dis = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
struct Point point;
printf("\nVeuillez saisir les cordonnees des deux points (x1,y1,x2,y2) :\n");
scanf("%f %f %f %f" ,&point.x1,&point.y1,&point.x2,&point.y2);
float dis = sqrt(pow((point.x2-point.x1),2)+pow((point.y2-point.y1),2));
printf("\nLa distance entre les deux points est :%f\n",dis);
return 0;
}
