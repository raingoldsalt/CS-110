#include <stdio.h>

struct trip {
    double distance;
    double time;
};

void calculate_speeds(double speeds[], const struct trip trips[], size_t array_size);

double calculate_mph(struct trip trip);

int main() {
    printf("Enter number of trips: ");
    size_t number_of_trips;
    scanf("%zu", &number_of_trips);

    struct trip trips[number_of_trips];
    for (size_t i = 0; i < number_of_trips; ++i) {
        printf("Enter a distance: ");
        scanf("%lf", trips[i].distance);
        printf("Enter a time: ");
        scanf("%lf", trips[i].time);
    }

    double speeds[number_of_trips];

    calculate_speeds(speeds, trips, number_of_trips);

    printf("The speeds are: \n");

    for (size_t i = 0; i < number_of_trips; ++i) {
        printf("%lf mph\n", speeds[i]);
    }

    return 0;
}

double calculate_mph(struct trip trip) {
    return trip.distance / trip.time * 60;
}

void calculate_speeds(double speeds[], const struct trip trips[], size_t array_size) {
    for (size_t i = 0; i < array_size; ++i) {
        speeds[i] = calculate_mph(trips[i]);
    }
}

