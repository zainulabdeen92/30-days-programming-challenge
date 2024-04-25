#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;

    // Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string and count vowels
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    // Print the number of vowels
    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}
