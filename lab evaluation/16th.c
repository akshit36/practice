#include <stdio.h>
#include <ctype.h>

int main() {
    char gender;

    // Reading a character from the user
    printf("Enter gender (M/m for Male, F/f for Female): ");
    scanf(" %c", &gender);

    // Converting the entered character to uppercase for ease of comparison
    gender = toupper(gender);

    // Using switch statement to print the corresponding gender word
    switch(gender) {
        case 'M':
            printf("Male\n");
            break;
        case 'F':
            printf("Female\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
