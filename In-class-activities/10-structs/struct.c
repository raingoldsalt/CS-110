#include <stdio.h>
#include <math.h>

struct point {
    double x;
    double y;
};

struct rectangle {
    struct point lower_left;
    struct point upper_right;
};

double distance(struct point p1, struct point p2);

struct rectangle make_rectangle(struct point lower_left, struct point upper_right);

void print_rectangle(struct rectangle ice_cream_sandwich);

int main() {

    struct point point1;

    point1.x = 5.2;
    point1.y = -3.4;

    struct point point2 = {10.7, 2.8};
    double dist = distance(point1, point2);
    printf("The distance between the two points is: %lf\n", dist);

    struct rectangle rect = make_rectangle(point1, point2);
    print_rectangle(rect);

    return 0;

}

double distance(struct point p1, struct point p2) {
   
    double x_distance = p1.x - p2.x;
    double y_distance = p1.y - p2.y;

    return sqrt(x_distance * x_distance + y_distance * y_distance);

}

struct rectangle make_rectangle(struct point lower_left, struct point upper_right) {

    struct rectangle rect;
    rect.lower_left = lower_left;
    rect.upper_right = upper_right;

    return rect;

}

void print_rectangle(struct rectangle ice_cream_sandwich) {
    printf("Lower left point is (%lf, %lf)\n", ice_cream_sandwich.lower_left.x, ice_cream_sandwich.lower_left.y);
    printf("Upper right point is (%lf, %lf)\n", ice_cream_sandwich.upper_right.x, ice_cream_sandwich.upper_right.y);

}