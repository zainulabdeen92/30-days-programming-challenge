#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print the string in reverse
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }

    return 0;
}
