// Write a C program to print all unique elements in an array.

#include <stdio.h>
#include <stdlib.h>

int main () {
    char array[100] = "programming";
    char unique[100];
    int n, i, j, k = 0, isUnique;

    // Calculate the length of the array
    for (n = 0; array[n] != '\0'; n++);

    // Find unique elements
    for (i = 0; i < n; i++) {
        isUnique = 1;
        for (j = 0; j < k; j++) {
            if (array[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[k++] = array[i];
            // printf("%c ", array[i]);
        }
    }
    unique[k] = '\0';
    printf("Original array as string: ");
    printf("%s\n", array);
    printf("Unique elements in the array as string: ");
    printf("%s\n", unique);

    return 0;
}