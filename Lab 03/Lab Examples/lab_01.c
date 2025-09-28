#include <stdio.h>
#include <stdlib.h>

int main () {
    int myNum = 43;
    int* ptr = &myNum;

    printf("%d\n", myNum);
    printf("%p\n", &myNum);
    printf("%p\n", ptr);

    return 0;
}