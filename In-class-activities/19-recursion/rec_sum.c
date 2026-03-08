#include <stdio.h>

int array_sum(const int *, size_t);

int main() {

    int array[4] = {1,2,3,4};
    printf("%i\n", array_sum(array, 4));
    return 0;

}

int array_sum(const int *array, size_t size) {
    
    if(size == 1) {
        return array[0];
    }

    else {
        return array[size - 1] + array_sum(array, size - 1);
    }

}