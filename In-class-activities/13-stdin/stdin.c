#include <stdio.h>


int main() {

    int c;

    char string[100];
    scanf("%s", string);
    printf("\"%s\"", string);

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}