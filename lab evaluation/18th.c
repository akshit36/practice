#include <stdio.h>

int main() {
    int n, num, positiveCount = 0, negativeCount = 0;

    // Reading n value from the user
    printf("Enter a value for n: ");
    scanf("%d", &n);

    // Reading values from 1 to n and counting positive and negative numbers
    for (int i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    // Displaying the counts of positive and negative numbers
    printf("\nNumber of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);

    return 0;
}
