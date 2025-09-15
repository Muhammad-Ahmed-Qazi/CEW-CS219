// Write a C program to print the nth term of the Fibonacci series using recursion and also print the series up to n terms using recursion.
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n, int t1, int t2) {
    if (n > 1) {
        printf("%d, ", t1);
        printFibonacci(n - 1, t2, t1 + t2);
    } else if (n == 1) {
        printf("%d", t1);
    }
}

int main() {
    int n, t1 = 1, t2 = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print nth term
    int nthTerm = fibonacci(n);
    printf("The %dth Fibonacci term is: %d\n", n, nthTerm);

    // Print the series
    printf("Fibonacci Series: ");
    printFibonacci(n, t1, t2);
    printf("\n");

    return 0;
}
