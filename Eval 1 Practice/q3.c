// Print the first and last element of an integer array
#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[100];
    int *p = arr;
    int num, i;

    printf("Enter number of elements in the array (<100):\n");
    scanf("%d", &num);

    i = num;

    printf("Enter integer elements:\n");
    while (i > 0) {
        scanf("%d", p);
        p++;
        i--;
    }
    
    p = arr;
    printf("First element: %d\n", *p);

    p = p + num - 1;
    printf("Last element: %d\n", *p);
    
    return 0;
}