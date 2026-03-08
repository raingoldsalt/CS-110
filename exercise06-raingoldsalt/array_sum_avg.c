#include <stdio.h>

int main(){
    int arraysize, number, sum = 0; 
    printf("Enter the size of the array: ");
    scanf("%i", &arraysize);

    int arr1[arraysize];
    printf("Enter the values to put in the array: ");
    for (int i=0; i < arraysize; ++i){
        scanf("%i", &number);
        arr1[i] = number;
    }
    for (int j=0; j < arraysize; ++j){
        sum = sum + arr1[j];
    }
    printf("Sum: %i\n", sum);
    printf("Average: %lf\n", (double)sum / arraysize);

    return 0;
}