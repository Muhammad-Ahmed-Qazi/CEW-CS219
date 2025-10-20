#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;
    char myString[100];

    fptr = fopen("lab5.txt", "r");
    // fgets(myString, 100, fptr); // Only reads the first line of the file
    // printf("%s", myString);
    while (fgets(myString, 100, fptr)) {
        printf("%s", myString);
    }
    printf("\n");

    fclose(fptr);
    
    return 0;
}