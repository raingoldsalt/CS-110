/* 

Write a program below which prints consecutive powers of 2, starting with 2^0,
which is 1. Ask the user for an upper bound on the powers to print. Print all
the powers of 2 less than or equal to this upper bound. Use a while loop. Here
is what an example run should look like:

Enter the upper bound: 32
1
2
4
8
16
32

C does not have an exponentiation operator like Python does, which means you
cannot calculate a power of 2 using 2^4 or 2 ** 4 or any such syntax. The
math.h library does have the pow() function, but that operates on double values,
not integers.

Instead of calculating each power of 2 from the exponent, keep track of the
next power of 2 to print using a variable. After printing the next value in the
body of your loop, update the variable to be the next power by multiplying it
by 2.

*/
#include <stdio.h>
int main() {
    int number,total=1;
    printf("Enter the upper bound: ");
    scanf("%i", &number);

    while(number>=total){
        printf("%i\n", total);
        total = total*2;
    }
    return 0;
}