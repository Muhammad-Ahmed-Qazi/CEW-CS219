// Write a program in C to swap elements using call by reference.
#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, *p1, *p2, temp;
    p1 = &a;
    p2 = &b;

    printf("Enter two integers: ");
    scanf("%d %d", p1, p2);

    printf("Before swapping: a = %d, b = %d\n", *p1, *p2);

    // Swapping using call by reference
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping: a = %d, b = %d\n", *p1, *p2);

    return 0;
}