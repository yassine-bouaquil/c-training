#include <stdio.h>

double max(double a, double b) {
    return ((a > b) ? a : b);
}

double min(double a, double b) {
    return ((a < b) ? a : b);
}

int main() {
    printf("Enter four numbers: ");
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    printf("The max is: %lf\n", (max(a, b) > max(c, d)) ? max(a, b) : max(c, d));
    printf("The min is: %lf\n", (min(a, b) < min(c, d)) ? min(a, b) : min(c, d));

    return 0;
}

