     #include <stdio.h>

int main() {
    char ch;

    // Input character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the input character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
