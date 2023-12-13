#include <stdio.h>

int main() {
    float x, y, result;
    char operation;

    // Reading values x and y from the user
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Enter value for y: ");
    scanf("%f", &y);

    // Reading operation choice from the user (+, -, *, /)
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Performing the requested operation
    switch (operation) {
        case '+':
            result = x + y;
            printf("Result of %.2f + %.2f = %.2f\n", x, y, result);
            break;
        case '-':
            result = x - y;
            printf("Result of %.2f - %.2f = %.2f\n", x, y, result);
            break;
        case '*':
            result = x * y;
            printf("Result of %.2f * %.2f = %.2f\n", x, y, result);
            break;
        case '/':
            if (y != 0) {
                result = x / y;
                printf("Result of %.2f / %.2f = %.2f\n", x, y, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
