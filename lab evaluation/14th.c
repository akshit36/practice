#include <stdio.h>

int main() {
    int age;

    // Reading age from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Checking eligibility based on age
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}