#include <stdio.h>

int main() {

    char string1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", string1);

    char string2[] = "World";
    printf("%s\n", string2);

    char os_string[100] = "Goodbye";
    printf("%s\n", os_string);

    os_string[7] = 'Z';
    os_string[0] = 'M';
    printf("%s\n", os_string);

    printf("os_string size: %zu\n", strlen(os_string));

    return 0;
}