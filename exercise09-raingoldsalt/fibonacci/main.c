#include <stdio.h>
#include "fibonacci.h"

int main() {
    unsigned int n;

    printf("Enter n to calculate the nth Fibonacci number: ");
    scanf("%u", &n);

    unsigned long result = fibonacci(n);

    printf("The %uth Fibonacci number is: %lu\n", n, result);

    return 0;
}