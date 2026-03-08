#include <stdio.h>

#include "stats.h"

int main() {
    size_t array_size;

    printf("Enter the size of the array: ");
    scanf("%zu", &array_size);

    int array[array_size];

    printf("Enter the values of the array: ");

    for(size_t i = 0; i < array_size; i++) {
        scanf("%i", &array[i]);
    }

    // Get all the stats in one function call
    struct stat_values stats = calculate_stats(array, array_size);

    printf("Max: %i\n", stats.max);
    printf("Min: %i\n", stats.min);
    printf("Range: %i\n", stats.range);
    printf("Sum: %i\n", stats.sum);
    printf("Average: %lf\n", stats.average);

    return 0;
}
