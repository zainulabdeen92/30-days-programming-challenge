#include <stdio.h>

// Function declaration
int sum(int num1, int num2);

int main() {
    int number1, number2;

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &number1);

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &number2);

    // Call the sum function and store the result
    int result = sum(number1, number2);

    // Display the result
    printf("Sum of %d and %d is %d\n", number1, number2, result);

    return 0;
}

// Function definition to calculate the sum
int sum(int num1, int num2) {
    return num1 + num2;
}
