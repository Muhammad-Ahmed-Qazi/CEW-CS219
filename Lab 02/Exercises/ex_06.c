// Write a C program to add two distances in inch-feet system using structures.

#include <stdio.h>
#include <stdlib.h>

struct Imperial {
    int feet;
    float inch;
};

int main () {
    struct Imperial d1, d2, sum;
    int feetUpdate;

    // Input first distance
    printf("Enter first distance (feet inch): ");
    scanf("%d %f", &d1.feet, &d1.inch);

    // Input second distance
    printf("Enter second distance (feet inch): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    // Add distances
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Convert inches to feet if necessary
    if (sum.inch >= 12.0) {
        feetUpdate = (int)(sum.inch / 12);
        sum.feet += feetUpdate;
        sum.inch = sum.inch - (feetUpdate * 12);
    }

    // Output result
    printf("Sum of distances = %d feet %.2f inches\n", sum.feet, sum.inch);

    return 0;
}