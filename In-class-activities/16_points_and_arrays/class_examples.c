#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool valid_number(const char *string) {
    size_t length = strlen(string);
    for (size_t i = 0; i < length; ++i) {
        if(!isdigit(string[i])) {
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[]) {

    /*srand(time(NULL));
    printf("%i\n", argc);
    for (int i = 0; i < 5; ++i) {
        for (size_t i = 0; i < argc; ++i) {
            //printf("%s\n", argv[i]);
            printf("%i\n", rand());
        }
    }
    return 0;*/

    srand(time(NULL));
    //printf("%i\n", RAND_MAX);
    if (argc == 2 && valid_number(argv[1])) {
        //atoi(argv[1]);
        int roll = rand() % atoi(argv[1]) + 1;
        printf("Dice roll: %i\n", roll);
    }

    else {
        printf("%s: Bad user....\n", argv[0]);
        return 1;
    }

   return 0;
}