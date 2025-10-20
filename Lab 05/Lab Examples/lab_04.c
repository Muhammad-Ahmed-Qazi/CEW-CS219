#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;

    fptr = fopen("lab5.txt", "a");
    if (fptr != NULL) {
        fprintf(fptr, "\nGood Morning!");
    } else {
        printf("Unable to open the file.");
    }

    fclose(fptr);
    
    return 0;
}