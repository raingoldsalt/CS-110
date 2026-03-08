#include <stdio.h>

int main() {
    size_t size = 0;
    int array[] = {1,2,3,4};

    printf("First: %i\n", array[0]);
    printf("First: %i\n", *array);
    printf("Second: %i\n", array[1]);
    printf("First: %i\n", *(array+1));
}