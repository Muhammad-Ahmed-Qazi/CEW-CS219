#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr, *fcpy;
    char ch;

    fptr = fopen("lab5.txt", "r");
    fcpy = fopen("lab5(2).txt", "w");

    if (fptr != NULL) {
        while ((ch = getc(fptr)) != EOF) {
            fputc(ch, fcpy);
        }
    } else {
        printf("Unable to open the file.");
    }

    fclose(fptr);
    fclose(fcpy);
    
    return 0;
}