#include "fibonacci.h"

unsigned long fibonacci(unsigned int n) {
    unsigned long twoprev = 0, oneprev = 1, current; 
    if (n == 0) {
        return twoprev;
    }
    else if (n == 1) {
        return oneprev;
    }
    for (int i = 2; i <= n; ++i) {
        current = twoprev + oneprev;
        twoprev = oneprev;
        oneprev = current;
    }
    return current;
}
