/*

Write a program which prints out a checkerboard of asterisks (*'s) with a size
specified by the user. This program will be much like the square program that
you wrote for the previous homework except that every other entry in each row
will be a space instead of an asterisk. The first row must start with an
asterisk, the second with a space, the third with an asterisk, etc. Each row
must have the same number of characters, so if the row ends with an empty space
you must print a space there even though it will not have a visible effect.

For this one you will need to use conditionals to decide whether to print an
asterisk or a space at each step. Think about how to decide which to print
based on whether the row and column values are even or odd. You can determine
whether a value is even or odd by seeing if value % 2 is 0 or 1.

Example output:

Enter the size of the checkerboard: 6
* * * 
 * * *
* * * 
 * * *
* * * 
 * * *

 */

#include <stdio.h>
int main() {
    int number;
    printf("Enter the size of the checkerboard: ");
    scanf("%i", &number);

    for(int i=1; i<=number; i++){
        for(int j=1; j<=number; j++){
            if(j%2==1 && i%2==1){
                printf("*");
            }
            else if(j%2==0 && i%2 ==1){
                printf(" ");
            }
            else if(j%2==1 && i%2==0){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}