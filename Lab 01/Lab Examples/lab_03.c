// Constants in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int myConstNum = 10;       // Integer constant
    const float myConstFloat = 3.14; // Floating point constant
    const char myConstChar = 'A';    // Character constant

    const float PI = 3.14159; // Constant for Pi (will always be 3.14159)
    // PI = 3.14; // This will cause a compilation error

    printf("Constants: %d (int, %zu bytes), %.2f (float, %zu bytes), %c (char, %zu bytes)\n", myConstNum, sizeof(myConstNum), myConstFloat, sizeof(myConstFloat), myConstChar, sizeof(myConstChar));

    return 0;
}