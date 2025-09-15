// Write a program in C to convert a decimal number to a binary number using functions.
#include <stdio.h>
#include <stdlib.h>

void convertToBinary(int n)
{
    // Function to convert denary to binary
    if (n > 1)
        convertToBinary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;

    // Getting user input
    printf("Enter a denary number: ");
    scanf("%d", &n);

    // Processing the denary number
    printf("The binary equivalent is: ");
    convertToBinary(n);
    printf("\n");

    return 0;
}