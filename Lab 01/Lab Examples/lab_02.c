// Variables in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum = 15;          // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    // printf("Integer: %d with size %ld B\n", myNum, sizeof(myNum));
    // printf("Float: %.2f with size %ld B\n", myFloatNum, sizeof(myFloatNum));
    // printf("Character: %c with size %ld B\n", myLetter, sizeof(myLetter));

    printf("All variables: %d (int, %zu bytes), %.2f (float, %zu bytes), %c (char, %zu bytes)\n", myNum, sizeof(myNum), myFloatNum, sizeof(myFloatNum), myLetter, sizeof(myLetter));

    return 0;
}