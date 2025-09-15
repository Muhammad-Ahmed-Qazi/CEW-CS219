// Functions in C
#include <stdio.h>
#include <stdlib.h>

// void myFunction()
// {
//     printf("I just got executed!\n");
// }

// int myFunction(int x, int y) // Function with parameters
// {
//     return x + y; // Return the sum of x and y
// }

// Declaration
int myFunction(int, int); // Function prototype

int main()
{
    // myFunction(); // Call the function   
    
    // int result = myFunction(5, 10); // Call the function with arguments
    // printf("The sum is: %d\n", result);

    int a = 5, b = 10;
    int sum = myFunction(a, b); // Call the function with arguments
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}

// Function definition
int myFunction(int x, int y)
{
    return x + y; // Return the sum of x and y
}