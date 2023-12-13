#include <stdio.h>

int main() {
    float num1, num2, result;

    // Reading values from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Comparison and operation based on conditions
    if (num1 > num2) {
        result = num1 * num2; // Multiplication if num1 is greater
        printf("The result of multiplication: %.2f\n", result);
    } else {
        if (num2 != 0) {
            result = num1 / num2; // Division if num1 is not greater and num2 is not zero
            printf("The result of division: %.2f\n", result);
        } else {
            printf("Cannot divide by zero.\n"); // Division by zero error
        }
    }

    return 0;
}
