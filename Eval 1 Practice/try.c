#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len;

    len = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", len);
    
    return 0;
}