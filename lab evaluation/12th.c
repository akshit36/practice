#include <stdio.h>

int main() {
    int age;
    float weight;

    // Reading age and weight from the user
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    // Checking eligibility based on conditions
    if (age > 18 && age <= 55 && weight > 45) {
        printf("You are eligible for blood donation.\n");
    } else {
        printf("You are not eligible for blood donation.\n");
    }

    return 0;
}
