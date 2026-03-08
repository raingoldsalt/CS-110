/*

Write a program which prints out a "square" of asterisks (*'s) with a size
specified by the user. If the size specified by the user is n, then there must
be n rows of n asterisks each. Here is an example run:

Enter the size of the square: 5
*****
*****
*****
*****
*****

Use nested loops to accomplish this. The outer loop should loop for n
iterations, one for each row. The inner loop should also loop for n iterations,
and each iteration it should print "*". In the body of the outer loop, after
the inner loop, you will need to print the "\n" to move to the next row.

You must not print any extra spaces at the end of each line to pass the tests.

*/

#include <stdio.h>
int main() {
    int number;
    printf("Enter the size of the square: ");
    scanf("%i", &number);

    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}