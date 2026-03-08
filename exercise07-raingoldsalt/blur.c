/*
    Image Bluring

    A simple method to blur an image is to change every pixel
    in an image to be the average of the pixel values that surround
    it (including that value itself).

    Consider the figure below of an image that is 3 pixels high
    and 4 pixels wide. Each pixel represents a grayscale value from
    0 (black) to 255 (white).
    _________________________
    |  10 | 255 | 128 |  45 |
    |_____|_____|_____|_____|
    |  5  |  3  |  4  |  25 |
    |_____|_____|_____|_____|
    |  9  |  1  |  7  |  11 |
    |_____|_____|_____|_____|

    Lets assume that we want to blur the pixel with the value 3. To do
    so, we need to find the average of that pixel value and the neighboring pixels
    that are above, below, left, and right of that pixel. The result that replaces
    the pixel with value 3 will be:

    10 + 255 + 128 + 5 + 3 + 4 + 9 + 1 + 7 = 422 / 9 = 46

    Notice that we truncate (drop/ignore) the floating portion of the division. This
    is because pixels can only be postive integer values. Be aware that you will have
    to be CAREFUL AROUND THE EDGES of the image. For example, if we want to blur the
    pixel with value 10, we only use the values 10, 255, 5, 3 as there are no neighbors
    to the left or above that pixel. The result is then:

    10 + 255 + 5 + 3 = 273 = 68

    Your program will require the:
    * height of the image
    * width of the image
    * the values for each row of the image

    You can enter this data manually, but the automated test data will look like this:
    
    3 4
    1 2 3 4 
    6 7 8 9 
    10 11 12 13 

    3 and 4 are the height and width respetively, and the rows of numbers are the pixel
    values. You can see this data in the .in files for the test.

    Your job is to take this input, put it into a multi-dimensional array and then perform
    the bluring algorithm described above to create a NEW multi-dimension array with the
    blurred values

    EXAMPLE INPUT/OUTPUT:
    
    Enter image height: 3
    Enter image width: 4
    Enter pixel values for row 0 (space separated): 1 2 3 4
    Enter pixel values for row 1 (space separated): 6 7 8 9
    Enter pixel values for row 2 (space separated): 10 11 12 13

    Blurred Image
    4 4 5 6 
    6 6 7 8 
    8 9 10 10 

    Some of the output along with a basic outline to approach
    the problem is presented below. Use this to guide you.
    YOU DO NOT NEED TO CHANGE THE LINES OF CODE PROVIDED.

    NOTE: EACH IMAGE VALUE WHEN PRINTED HAS ONE SPACE BEFORE THE NEWLINE!
*/

#include <stdio.h>

int main() {
    int height, width, pixel;
    printf("Enter image height: ");
    // Collect the height from the user
    scanf("%i", &height);
    
    printf("Enter image width: ");
    // Collect the width from the user
    scanf("%i", &width);

    // Create the input array
    int arr[height][width];

    // Initialize the array with image data from user input
    for (int i = 0; i < height; ++i){
        printf("Enter %i pixel values for row %i (space separated): ", width, i);
        for (int j = 0; j < width; ++j){
            scanf("%i", &pixel);
            arr[i][j] = pixel;
        }
    }

    // Create the output array
    int barr[height][width];

    // Perfrom the blurring algorithm

    for (int l = 0; l < height; ++l){
        for (int k = 0; k < width; ++k){
            int sum = arr[l][k], count=1;
            if (l - 1 >= 0){
                sum = sum + arr[l-1][k];
                count++;
            }
            if (l + 1 < height) {
                sum = sum + arr[l+1][k];
                count++;
            }
            if (k - 1 >= 0){
                sum = sum + arr[l][k-1];
                count++;
            }
            if (k + 1 < width) {
                sum = sum + arr[l][k+1];
                count++;
            }
            if (l - 1 >= 0 && k - 1 >= 0){
                sum = sum + arr[l-1][k-1];
                count++;
            }
            if (l + 1 < height && k - 1 >= 0){
                sum = sum + arr[l+1][k-1];
                count++;
            }
            if (l - 1 >= 0 && k + 1 < width){
                sum = sum + arr[l-1][k+1];
                count++;
            }
            if (l + 1 < height && k + 1 < width){
                sum = sum + arr[l+1][k+1];
                count++;
            }
            barr[l][k] = sum / count;
        }
    }
    
    printf("\nBlurred Image\n");
    
    // Display the blurred image data

    for (int m = 0; m < height; ++m){
        for (int n = 0; n < width; ++n){
            printf("%i ", barr[m][n]);
        }
        printf("\n");
    }

    return 0;
}
