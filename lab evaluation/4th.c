#include <stdio.h>

int main() {
    int a, b, c, sum;

    // Reading values of a, b, and c from the user
    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    printf("Enter the value for c: ");
    scanf("%d", &c);

    // Adding the values
    sum = a + b + c;

    // Checking if the sum is in the range of 100 and 200
    if (sum >= 100 && sum <= 200) {
        printf("The sum of a, b, and c is %d, which is in the range of 100 to 200.\n", sum);
    } else {
        printf("The sum of a, b, and c is %d, which is NOT in the range of 100 to 200.\n", sum);
    }

    return 0;
}
