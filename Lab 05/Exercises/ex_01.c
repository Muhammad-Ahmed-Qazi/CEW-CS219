// Write a program to create a new text file and write some text into it. Open the file in append mode and add more text to it. Read the contents of the file and display them on the console.
#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;
    char ch;

    fptr = fopen("lab_05_ex_01.txt", "w");

    // Writing some text into the file
    if (fptr == NULL) {
        printf("Unable to open the file in writing mode.\n");
    } else {
        fprintf(fptr, "This is the first line of text.\n");
    }
    fclose(fptr);

    // Opening the file in append mode to add more text
    fptr = fopen("lab_05_ex_01.txt", "a");
    if (fptr == NULL) {
        printf("Unable to open the file in append mode.\n");
    } else {
        fprintf(fptr, "This is the second line of text appended to the file.\n");
    }
    fclose(fptr);

    // Reading the contents of the file and displaying them on the console
    fptr = fopen("lab_05_ex_01.txt", "r");
    if (fptr == NULL) {
        printf("Unable to open the file in reading mode.\n");
    } else {
        printf("Contents of the file:\n");
        while ((ch = fgetc(fptr)) != EOF) {
            putchar(ch);
        }
        fclose(fptr);
    }

    return 0;
}