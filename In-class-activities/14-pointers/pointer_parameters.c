#include <stdio.h>

void square_and_cube(int x, int *square, int *cube);

void sum_and_avg(const int array[], size_t size, int *sum, double *average);

int main() {

    int x = 10;
    int a[] = {1, 2, 3, 4};
    int size = 4;
    int square;
    int cube;
    int sum;
    double average;
    square_and_cube(x, &square, &cube);
    printf("%i squared is %i and cubed is %i\n", x, square, cube);
    sum_and_avg(a, size, &sum, &average);
    printf("%i %lf", sum, average);
    return 0;
}

void square_and_cube(int x, int *square, int *cube) {
    *square = x * x;
    *cube = x * x * x;
}

void sum_and_avg(const int array[], size_t size, int *sum, double *average) {
    *sum = 0;
    for (size_t i = 0; i < size; ++i) {
        *sum += array[i];
        printf("%i\n", array[i]);
    }
    *average = *sum / (double)size;
}