#ifndef STATS_H
#define STATS_H

#include <stddef.h>   // for size_t

// This struct stores some simple stats
struct stat_values {
    int min;
    int max;
    int sum;
    int range;
    double average;
};

/**
 * Calculate the min, max, sum, range, and average of an array.
 *
 * Parameters:
 *   array - the array on which to calculate the stats, must not be empty
 *   size - the number of elements in the array
 *
 * Return:
 *   A stat_values struct containing stats from the array
 */
struct stat_values calculate_stats(const int array[], size_t size);

#endif // STATS_H
