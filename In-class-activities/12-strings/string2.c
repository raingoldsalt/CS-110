#include <stdio.h>
#include <string.h>

void repeat(char string[]);

int main() {

    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);

    printf("%s\n", string);

    repeat(string);

    printf("%s\n", string);

    return 0;
}

void repeat(char string[]) { 
//If we make a change to string here, it will change the string inside of the main.
    size_t original_length = strlen(string);
    for (size_t i = 0; i < original_length; ++i) {
        string [i + original_length] = string[i];
    }
    string[original_length * 2] = 0;
}