#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("The number is zero.\n");

    return 0;
}
