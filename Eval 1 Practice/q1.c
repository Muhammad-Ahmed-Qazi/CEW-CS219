// Write a program to print an array of 6 integers in reverse order.
#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    int *p = arr;

    i = sizeof(arr) / sizeof(*(p + 1));
    p = p + i - 1;

    while (i > 0) {
        printf("%d ", *p);
        p--;
        i--;
    }

    printf("\n");
    
    return 0;
}