#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;
    char myString[80];
    int i;

    fptr = fopen("lab5.txt", "w");
    printf("Enter the text: ");
    gets(myString);
    if (fptr != NULL) {
        fputs(myString, fptr);
        printf("The string has been copied to the file.\n");
    } else {
        printf("Unable to open the file.");
    }

    fclose(fptr);
    
    return 0;
}