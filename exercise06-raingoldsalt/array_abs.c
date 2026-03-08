#include <stdio.h>

int main() {
    int arraysize, number;
    printf("Enter the size of the array: ");
    scanf("%i", &arraysize);
    int arr1[arraysize];
    printf("Enter the integers to put in the array: ");
    for (int i=0; i<arraysize; ++i){
        scanf("%i", &number);
        arr1[i] = number;
    }
    printf("Here are the absolute values of the integers you entered:\n");
    for (int j=0; j<arraysize; ++j){
        if(arr1[j] < 0){
            arr1[j] = arr1[j] * (-1);
        }
        printf("%i ", arr1[j]);
    }
    printf("\n");
    return 0;
}