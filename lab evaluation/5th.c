#include <stdio.h>

int main() {
    int notes100 = 5;   // Number of Rs. 100 notes
    int notes50 = 3;    // Number of Rs. 50 notes
    int notes20 = 20;   // Number of Rs. 20 notes

    int amount100 = 100 * notes100;
    int amount50 = 50 * notes50;
    int amount20 = 20 * notes20;

    int totalAmount = amount100 + amount50 + amount20;

    printf("Total amount = Rs. %d\n", totalAmount);

    return 0;
}
