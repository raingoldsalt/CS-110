#include <stdio.h>
#include <stdlib.h>

int main() {
    //capacity: numbers of block in arary, size 0 means that there's nothing yet.
    size_t size = 0;
    size_t capacity = 1;

    int *array = malloc(capacity * sizeof(int)); 

    if (array == NULL) {
        printf("Unable to allocate memory\n");
        return 1;
    }

    int input;
    while(scanf("%i", &input) == 1) {
        if (size == capacity) {
            capacity += 2;

            array = realloc(array, capacity * sizeof(int));

            if(array == NULL) {
                printf("Unable to allocate memory\n");
                return 1;
            }
            printf("Resized capacity to: %zu\n", capacity);
        }

        array[size] = input;
        ++size;
    }

    array = realloc(array, size * sizeof(int));

    for (size_t i = 0; i < size; ++i) {
        printf("%i\n", array[i]);
    }

    free(array);
    return 0;
}