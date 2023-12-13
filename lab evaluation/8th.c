#include <stdio.h>

// Function to swap two numbers
void swapNumbers(int a, int b) {
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping logic
    int temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

int main() {
    int num1, num2;

    // Reading values from the user
    printf("Enter the first number (a): ");
    scanf("%d", &num1);
    printf("Enter the second number (b): ");
    scanf("%d", &num2);

    // Calling the function to swap numbers
    swapNumbers(num1, num2);

    printf("\nOriginal values after swapping function:\n");
    printf("a = %d\n", num1);
    printf("b = %d\n", num2);

    return 0;
}
