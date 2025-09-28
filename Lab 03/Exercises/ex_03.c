// Write a C program to input and print array elements using pointers.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int array[100], *p;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    p = array; // Point to the first element of the array

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}