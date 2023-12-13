#include <stdio.h>

int main() {
    long int x, reversedNumber = 0, remainder;

    // Reading a number greater than three digits from the user
    printf("Enter a number greater than three digits: ");
    scanf("%ld", &x);

    // Reversing the given number
    while (x != 0) {
        remainder = x % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        x /= 10;
    }

    // Displaying the reversed number
    printf("The reversed number is: %ld\n", reversedNumber);

    return 0;
}
