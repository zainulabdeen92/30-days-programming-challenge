#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(int n) {
    int decimalNumber = 0, base = 1, remainder;

    while (n != 0) {
        remainder = n % 10;
        decimalNumber += remainder * base;
        base *= 2;
        n /= 10;
    }

    return decimalNumber;
}

int main() {
    int binaryNumber;

    // Input the binary number from the user
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    // Call the function to convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);

    // Output the decimal equivalent
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
