// Write a program in C to print a string in reverse using pointers
#include <stdio.h>
#include <stdlib.h>

int main () {
    char str[100], *p;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    p = str + length - 1; // Point to the last character before null terminator
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(*p);
        p--;
    }
    putchar('\n');
    
    return 0;
}