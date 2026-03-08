#include "triangle.h" 
//specific file from my computer
//<> <- specific library

bool is_triangle(double a, double b, double c) {
    return a + b > c && a + c > b && b + c > a;
}