#include <stdio.h>

int main() {
    double length;
    printf("Enter the length: ");
    scanf("%lf", &length);

    double width;
    printf("Enter the width: ");
    scanf("%lf", &width);
    
    double area = length * width / 2;
    printf("The area of the triangle is %lf\n", area);

    return 0;
}
