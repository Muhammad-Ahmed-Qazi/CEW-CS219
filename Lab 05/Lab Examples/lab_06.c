#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;
    int ch;

    fptr = fopen("lab5.txt", "r");
    if (fptr != NULL) {
        while ((ch = getc(fptr)) != EOF) {
            printf("%c", ch);
        }
    } else {
        printf("Unable to open the file.");
    }

    printf("\n");
    fclose(fptr);
    
    return 0;
}