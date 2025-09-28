#include <stdio.h>
#include <stdlib.h>

int main () {
    int myNum[4] = {25, 50, 75, 100};

    printf("%p\n", myNum);       // prints the address of the first element in the array
    printf("%p\n", &myNum[0]);   // prints the address of the first element in the array
    printf("%d\n", *myNum);      // prints the value of the first element in the array

    // Looping through an array
    int *ptr = myNum; // point to the first element in the array
    for (int i = 0; i < 4; i++) {
        printf("Value of myNum[%d] = %d\n", i, *(ptr + i));
    }

    // Modifying array elements using pointers
    *myNum = 13;
    *(myNum + 1) = 42;

    printf("myNum[0] = %d\n", myNum[0]);
    printf("myNum[1] = %d\n", myNum[1]);

    return 0;
}