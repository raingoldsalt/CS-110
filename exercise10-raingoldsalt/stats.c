#include "stats.h"

struct stat_values calculate_stats(const int array[], size_t size) {
    
    int max = array[0];
    int min = array[0];
    int sum = 0;
    int range = 0;
    double average = 0;
    
    for (size_t i = 0; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
        if (min > array[i]) {
            min = array[i];
        }
        sum += array[i];
    }

    range = max - min;
    average = sum / (double) size;

    struct stat_values stats = {min, max, sum, range, average};

    return stats;
}
