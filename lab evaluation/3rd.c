#include <stdio.h>

// Function to calculate factorial
unsigned long long calculateFactorial(int number) {
    if (number == 0 || number == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        unsigned long long factorial = 1;
        for (int i = 2; i <= number; ++i) {
            factorial *= i;
        }
        return factorial;
    }
}

int main() {
    int num;

    // Reading a number from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating factorial using the function
        unsigned long long fact = calculateFactorial(num);
        printf("The factorial of %d is %llu\n", num, fact);
    }

    return 0;
}
