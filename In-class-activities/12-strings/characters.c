#include <stdio.h>

int main() {
    char character; 
    character = 'c';

    printf("%c\n", character);

    putchar(character);
    putchar(character);
    putchar(character);
    putchar('\n');

    char user_input = getchar();
    putchar(user_input);

    scanf("%c", &user_input);
    printf("%c", user_input);


    return 0;
}