#include <stdio.h>

int main() {
    printf("Enter the length: ");
    unsigned long int length;
    scanf("%lu", &length);

    printf("Enter the width: ");
    unsigned long int width;
    scanf("%lu", &width);

    unsigned long int area = length * width;
    printf("The area of the rectangle is %lu\n", area);

    unsigned long int perimeter = length * 2 + width * 2;
    printf("The perimeter of the rectangle is %lu\n", perimeter);

    return 0;
}
