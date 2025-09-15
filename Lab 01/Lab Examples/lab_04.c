// Operators in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 5;

    // Arithmetic Operators
    printf("%d + %d = %d\t(Addition)\n", x, y, x + y);       // + operator
    printf("%d - %d = %d\t(Subtraction)\n", x, y, x - y);    // - operator
    printf("%d * %d = %d\t(Multiplication)\n", x, y, x * y); // * operator
    printf("%d / %d = %d\t(Division)\n", x, y, x / y);       // / operator
    printf("%d %% %d = %d\t(Modulus)\n", x, y, x % y);       // % operator

    // Comparison Operators
    printf("%d == %d: %d\t(Equal to)\n", x, y, x == y);                 // == operator
    printf("%d != %d: %d\t(Not equal to)\n", x, y, x != y);             // != operator
    printf("%d > %d: %d\t(Greater than)\n", x, y, x > y);               // > operator
    printf("%d < %d: %d\t(Less than)\n", x, y, x < y);                  // < operator
    printf("%d >= %d: %d\t(Greater than or equal to)\n", x, y, x >= y); // >= operator
    printf("%d <= %d: %d\t(Less than or equal to)\n", x, y, x <= y);    // <= operator

    // Logical Operators
    printf("(%d > %d) && (%d < %d): %d\t(Logical AND)\n", x, y, x, y, (x > y) && (x < y)); // && operator
    printf("(%d > %d) || (%d < %d): %d\t(Logical OR)\n", x, y, x, y, (x > y) || (x < y));  // || operator
    printf("! (%d > %d): %d\t(Logical NOT)\n", x, y, !(x > y));                            // ! operator

    return 0;
}