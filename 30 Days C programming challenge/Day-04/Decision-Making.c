#include <stdio.h>

int main() {
    char choice;

    printf("Do you want to go left or right? (l/r): ");
    scanf(" %c", &choice);

    if (choice == 'l' || choice == 'L') {
        printf("You chose to go left.\n");
    } else if (choice == 'r' || choice == 'R') {
        printf("You chose to go right.\n");
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
