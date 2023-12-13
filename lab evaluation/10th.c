#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i, len, isPalindrome = 1;

    // Read string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    len = strlen(str);

    // Convert the string to lowercase for case-insensitive comparison
    for (i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    // Check for palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
