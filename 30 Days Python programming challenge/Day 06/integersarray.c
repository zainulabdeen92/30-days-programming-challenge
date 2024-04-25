#include <stdio.h>

int main() {
    int size;
    
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
    
    // Display the filled array
    printf("The array you entered is:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
