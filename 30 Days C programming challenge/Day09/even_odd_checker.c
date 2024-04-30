#include <stdio.h>

// Function declaration
void checkEvenOdd(int number);

int main() {
    int num;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function to check if the number is even or odd
    checkEvenOdd(num);

    return 0;
}

// Function definition to check if a number is even or odd
void checkEvenOdd(int number) {
    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);
}
