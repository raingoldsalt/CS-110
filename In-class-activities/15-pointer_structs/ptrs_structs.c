#include <stdio.h>
#include <math.h>

struct point {
    double x;
    double y;
};

void init_point(struct point* p, double x, double y);
void print_point(const struct point* unicorn);
void distance_and_slope(const struct point *p1, const struct point *p2, double * distance, double * slope);

int main() {

    struct point p1;
    struct point p2;

    double distance, slope;

    init_point(&p1, 1.0, 2.5);
    init_point(&p2, 2.0, 4.5);
    print_point(&p1);

    distance_and_slope(&p1, &p2, &distance, &slope);
    printf("The distance is: %lf and the slope is: %lf\n", distance, slope);

    return 0;
}

void init_point(struct point* p, double x, double y) {
    p->x = x;
    p->y = y;
}

void print_point(const struct point* unicorn) {
    printf("(%lf, %lf)\n", unicorn->x, unicorn->y);
}

void distance_and_slope(const struct point *p1, const struct point *p2, double * distance, double * slope) {
    *distance = sqrt((p2->x - p1->x) * (p2->x - p1->x) + (p2->y - p1->y) * (p2->y - p1->y));
    *slope = ((p2->y-p1->y) / (p2->x - p1->x));
}
