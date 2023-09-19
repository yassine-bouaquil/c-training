#include <stdio.h>
#include <math.h>


struct Point {
    double x;
    double y;
};


double distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    struct Point point1, point2;


    printf("Entrez les coordonnées du premier point (x1 y1) : ");
    scanf("%lf %lf", &point1.x, &point1.y);

    printf("Entrez les coordonnées du deuxième point (x2 y2) : ");
    scanf("%lf %lf", &point2.x, &point2.y);

    double dist = distance(point1, point2);
    printf("La distance entre les points est : %lf\n", dist);

    return 0;
}


