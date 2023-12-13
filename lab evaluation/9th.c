#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Reading coordinates of the first point
    printf("Enter x-coordinate of first point: ");
    scanf("%lf", &x1);
    printf("Enter y-coordinate of first point: ");
    scanf("%lf", &y1);

    // Reading coordinates of the second point
    printf("Enter x-coordinate of second point: ");
    scanf("%lf", &x2);
    printf("Enter y-coordinate of second point: ");
    scanf("%lf", &y2);

    // Calculating Euclidean distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Displaying the result
    printf("The Euclidean distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is: %.2lf\n", x1, y1, x2, y2, distance);

    return 0;
}
