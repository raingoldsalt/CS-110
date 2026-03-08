#include "pizza.h"

// Implement the 3 functions here
double circle_area(double radius) {

    return M_PI * radius * radius;

}

double price_per_square_inch(struct pizza pizza) {

    double radius = pizza.size / 2.0;
    double area = circle_area(radius);

    return pizza.price / area;

}

struct pizza best_value_pizza(struct pizza pizzas[], size_t size) {
   
   double min = price_per_square_inch(pizzas[0]);
   size_t minnum = 0;

    for (size_t i = 0; i < size; ++i) {
        if (min > price_per_square_inch(pizzas[i])) {
            min = price_per_square_inch(pizzas[i]);
            minnum = i;
        }
    }
    
    return pizzas[minnum];
}