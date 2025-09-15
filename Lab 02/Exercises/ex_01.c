// Write a C program to display the first n odd natural numbers and their sum using for, while and do-while loop.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Using for loop:\n");
    for (int i = 1; i <= n; i = i + 2) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum: %d\n", sum);

    sum = 0; // Reset sum for next loop
    printf("Using while loop:\n");
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        sum += i;
        i += 2;
    }
    printf("\nSum: %d\n", sum);

    sum = 0; // Reset sum for next loop
    printf("Using do-while loop:\n");
    i = 1;
    if (n >= 1) { // Ensure at least one iteration for do-while
        do {
            printf("%d ", i);
            sum += i;
            i += 2;
        } while (i <= n);
    }
    printf("\nSum: %d\n", sum);
    
    return 0;
}