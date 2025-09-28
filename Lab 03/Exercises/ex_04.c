// Write a C program to search for an element in an array using pointers
#include <stdio.h>
#include <stdlib.h>

int main () {
    int array[100], *p;
    int n, target, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    p = array; // Point to the first element of the array

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (*(p + i) == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}