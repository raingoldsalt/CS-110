#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter x1: ");
    double x1;
    scanf("%lf", &x1);

    printf("Enter y1: ");
    double y1;
    scanf("%lf", &y1);

    printf("Enter x2: ");
    double x2;
    scanf("%lf", &x2);

    printf("Enter y2: ");
    double y2;
    scanf("%lf", &y2);

    double y = y2-y1;
    double x = x2-x1;
    double distance = sqrt(y*y+x*x);
    printf("The distance between (%.2lf,%.2lf) and (%.2lf,%.2lf) is %.2lf\n", x1, y1, x2, y2, distance);

    return 0;
}
