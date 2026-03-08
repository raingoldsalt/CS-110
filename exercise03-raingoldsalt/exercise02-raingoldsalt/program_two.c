#include <stdio.h>

int main() {
    int x;
    printf("Enter x: ");
    scanf("%i", &x);

    int y;
    printf("Enter y: ");
    scanf("%i", &y);

    int sum = x + y;

    printf("x + y is %i\n", sum);

    int difference = x - y;

    printf("x - y is %i\n", difference);

    return 0;
}
