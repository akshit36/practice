#include <stdio.h>

int main() {
    int startReading, endReading, unitsConsumed;
    float totalBill = 0.0;

    // Reading starting and ending meter readings from the user
    printf("Enter the starting meter reading: ");
    scanf("%d", &startReading);
    printf("Enter the ending meter reading: ");
    scanf("%d", &endReading);

    // Calculating units consumed
    unitsConsumed = endReading - startReading;

    // Calculating the bill based on consumption ranges
    if (unitsConsumed > 500) {
        totalBill = unitsConsumed * 4.50;
    } else if (unitsConsumed >= 200 && unitsConsumed <= 500) {
        totalBill = unitsConsumed * 3.50;
    } else if (unitsConsumed >= 100 && unitsConsumed < 200) {
        totalBill = unitsConsumed * 2.50;
    } else if (unitsConsumed < 100) {
        totalBill = unitsConsumed * 1.50;
    }

    // Displaying the total bill amount
    printf("Total energy bill: Rs. %.2f\n", totalBill);

    return 0;
}
