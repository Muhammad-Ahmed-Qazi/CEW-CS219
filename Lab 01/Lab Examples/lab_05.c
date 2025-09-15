// Format Specifiers and Field Width Specifiers in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    // Format Specifiers
    printf("Integer: %d\n", myNum);             // %d for integers
    printf("Floating point: %f\n", myFloatNum); // %f for floating point numbers
    printf("Character: %c\n", myLetter);        // %c

    // Field Width Specifiers
    printf("Integer with width 5: %5d\n", myNum);                              // Width of 5 for integers
    printf("Floating point with width 7 and 2 decimals: %7.2f\n", myFloatNum); // Width of 7 and 2 decimals for floats
    printf("Character with width 3: %3c\n", myLetter);                         // Width of 3 for characters

    return 0;
}