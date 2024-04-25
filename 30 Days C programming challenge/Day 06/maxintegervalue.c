#include <stdio.h>

int main() {
    int size, max;
    
    // Ask user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Create an array of integers with the given size
    int array[size];
    
    // Fill the array with user input
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    
    // Find the maximum value in the array
    max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    
    // Display the maximum value
    printf("The maximum value in the array is: %d\n", max);
    
    return 0;
}
