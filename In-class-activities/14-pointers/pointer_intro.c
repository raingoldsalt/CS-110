#include <stdio.h>

int main() {

    int x;
    scanf("%i", &x);

    int *harold = &x;
    //int* harold = &x;
    //int * harold = &x;

    printf("value: %i\n", *harold);
    printf("address: %p\n", harold);

    *harold = 4;

    printf("value: %i\n", x);


    return 0;
}