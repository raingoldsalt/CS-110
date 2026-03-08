#include <stdio.h>
#include "triangle.h"

void test_is_triangle(double a, double b, double c, bool expected);

int main() {
    test_is_triangle(1, 1, 1, true);
    test_is_triangle(1.001, 2, 3, true);
    test_is_triangle(0, 2, 3, true);
    
    return 0;
}

void test_is_triangle(double a, double b, double c, bool expected) {
    if (is_triangle(a, b, c) != expected) {
        printf("Test failed for values: %lf, %lf, %lf\n", a, b, c);
    }
}
