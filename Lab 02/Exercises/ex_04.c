// Write a C program to read a sentence and replace lowercase characters with uppercase and vice versa.

#include <stdio.h>
#include <stdlib.h>

int main () {
    char str[500];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
        i++;
    }

    printf("Modified sentence: %s\n", str);
    return 0;
}