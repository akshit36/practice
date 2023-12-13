#include <stdio.h>

int main() {
    float principleAmount, rateOfInterest, interestAmount;
    int tenure;

    // Reading loan amount and tenure from the user
    printf("Enter loan amount: ");
    scanf("%f", &principleAmount);
    printf("Enter tenure to clear the loan amount (in years): ");
    scanf("%d", &tenure);

    // Calculating rate of interest based on the loan amount
    if (principleAmount >= 10000) {
        rateOfInterest = 0.20;
    } else if (principleAmount >= 8000 && principleAmount <= 9999) {
        rateOfInterest = 0.18;
    } else {
        rateOfInterest = 0.16;
    }

    // Calculating interest amount
    interestAmount = principleAmount * rateOfInterest * tenure;

    // Displaying the loan details and interest amount
    printf("\nLoan Amount: Rs. %.2f\n", principleAmount);
    printf("Tenure to clear the loan amount: %d years\n", tenure);
    printf("Rate of Interest: %.2f%%\n", rateOfInterest * 100);
    printf("Interest Amount: Rs. %.2f\n", interestAmount);

    return 0;
}
