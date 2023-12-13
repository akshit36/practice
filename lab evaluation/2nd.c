#include <stdio.h>

int main() {
    int x, y, z;
    int a, b, c;
    
    // Reading values for x, y, and z from the user
    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("Enter the value for y: ");
    scanf("%d", &y);
    printf("Enter the value for z: ");
    scanf("%d", &z);

    // Evaluating values of a, b, and c using conditional statements
    if (x > y && x > z) {
        a = x;
        if (y > z) {
            b = y;
            c = z;
        } else {
            b = z;
            c = y;
        }
    } else if (y > x && y > z) {
        a = y;
        if (x > z) {
            b = x;
            c = z;
        } else {
            b = z;
            c = x;
        }
    } else {
        a = z;
        if (x > y) {
            b = x;
            c = y;
        } else {
            b = y;
            c = x;
        }
    }

    // Performing sums with two sets of variables
    int sum1 = a + b;
    int sum2 = b + c;

    // Checking for equality and printing messages accordingly
    if (sum1 == sum2) {
        printf("The sums are equal: %d = %d\n", sum1, sum2);
    } else {
        printf("The sums are not equal: %d != %d\n", sum1, sum2);
    }

    return 0;
}
