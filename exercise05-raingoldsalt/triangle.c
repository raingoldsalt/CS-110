/*

Write a program which prints out a triangle of asterisks (*'s) with a size
specified by the user. If the size specified by the user is n, then there must
be n rows of asterisks where the first row has 1 asterisk, the second has 2, and
so on. Here is an example run:


Enter the size of the triangle: 6
*
**
***
****
*****
******

Here the number of iterations of the inner loop depends on the current
iteration of the outer loop. That is, during the first iteration of the outer
loop the inner loop prints 1 asterisk, during the second iteration of the outer
loop the inner loop prints 2 asterisks, etc.

 */

#include <stdio.h>

int main() {
    int number;
    printf("Enter the size of the triangle: ");
    scanf("%i", &number);

    for(int i=1;i<=number;i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
