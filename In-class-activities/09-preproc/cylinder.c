#include "cylinder.h"
#include "circle.h"

double cylinder_area(double radius, double height) {
    return circle_area(radius) * height;
}