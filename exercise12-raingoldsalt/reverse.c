#include <string.h>

#include "reverse.h"

// Implement the two functions in this file.

void reverse_string(const char original[], char reversed[]) {

    size_t size = strlen(original);

    for (size_t i = 0; i < size; ++i) {
        reversed[i] = original[size - i - 1];
    }

    reversed[size] = '\0'; 
}

void reverse_string_in_place(char string[]) {

    size_t size = strlen(string);

    for (size_t i = 0; i < size / 2; ++i) {

        char temp = string[i];
        string[i] = string[size - i - 1];
        string[size - i -1] = temp;

    }
}