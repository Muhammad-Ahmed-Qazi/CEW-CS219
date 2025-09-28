#include <stdio.h>
#include <stdlib.h>

int main () {
    int var;
    int *ptr;
    int **pptr;
    var = 3000;

    ptr = &var; // pointer to var
    pptr = &ptr; // pointer to pointer to var

    printf("Value of var = %d\n", var );
    printf("Value available at *ptr = %d\n", *ptr );
    printf("Value available at **pptr = %d\n", **pptr );
    
    return 0;
}