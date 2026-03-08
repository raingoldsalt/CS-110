#include <stdio.h>

int main() {

    FILE *fp = fopen("data/input.txt", "r");

    if (fp == NULL) {
        printf("Couldn't open file\n");
        return 1;
    }

    int c;

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);

    //create file then write to it
    FILE *output_fp = fopen("data/output.txt", "w");
    if (output_fp == NULL) {
        printf("Couldn't open file\n");
        return 1;
    }

    fprintf(output_fp, "Hello file! How are you today\n");
    fprintf(output_fp, "Love, Jun\n");
    fclose(output_fp);

    //create file if it doesn't exist, then write content to the end of the file
    FILE *append_fp = fopen("data/append.txt", "a");
    if (append_fp == NULL) {
        printf("Couldn't open file\n");
        return 1;
    } 

    fprintf(append_fp, "All work and no play makes Jack a dull boy.\n");
    fclose(append_fp);

    FILE *numbers_fp = fopen("numbers.txt", "r");
    if (numbers_fp == NULL) {
        printf("Couldn't open file\n");
        return 1;
    } 

    int input;
    while (fscanf(numbers_fp, "%i", &input) == 1) {
        printf("%i\n", input);
    }

    fclose(numbers_fp);

    return 0;
}