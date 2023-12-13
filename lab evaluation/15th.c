#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Reading a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Checking if the entered character is a letter
    if (isalpha(ch)) {
        // Converting the character to lowercase for ease of comparison
        ch = tolower(ch);

        switch(ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("'%c' is a vowel.\n", ch);
                break;
            default:
                printf("'%c' is a consonant.\n", ch);
                break;
        }
    } else {
        // If the character is not a letter, consider it as a symbol
        printf("'%c' is a symbol.\n", ch);
    }

    return 0;
}
