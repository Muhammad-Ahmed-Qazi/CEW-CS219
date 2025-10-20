#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;

    fptr = fopen("lab5.txt", "w");
    fputs("This is a test", fptr);
    fseek(fptr, 9, SEEK_SET);
    // fseek(fptr, 9, SEEK_CUR);
    // fseek(fptr, 9, SEEK_SET);
    fputs(" test for lab5 fseek function.", fptr);

    fclose(fptr);
    
    return 0;
}