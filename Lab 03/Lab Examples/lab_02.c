#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr = NULL;

    printf("Value of ptr: %p\n", (void*)ptr);
    
    if (ptr) {
        printf("ptr is not NULL\n");
    } else {
        printf("ptr is NULL\n");
    }

    return 0;
}