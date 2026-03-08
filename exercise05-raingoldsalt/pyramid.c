/*

Write a program which prints out a pyramid of asterisks (*'s) with a size
specified by the user. If the size specified by the user is n, then there must
be n rows of asterisks where the first row has 1 asterisk, the second has 3,
and so on. Each row must be centered, and there must not be any trailing spaces
after the asterisks. Here is an example run:


Enter the size of the pyramid: 4
   *
  ***
 *****
*******

For this one, think about how many spaces and how many asterisks you need in
each row. You will need two separate loops nested inside the main loop, one to
print the leading spaces and the other to print the asterisks.

 */

#include <stdio.h>
int main(){
   int number;
   printf("Enter the size of the pyramid: ");
   scanf("%i", &number);

   for(int i=1; i<=number; i++)
   {
      for(int j=1; j<= number-i; j++){
         printf(" ");
      }
      for(int k=1; k<=2*(i-1)+1; k++){
         printf("*");
      }
      printf("\n");
   }
   return 0;
}