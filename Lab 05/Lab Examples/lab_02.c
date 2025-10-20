#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;

    fptr = fopen("lab5.txt", "w");
    if (fptr != NULL) {
        fprintf(fptr, "Greetings = %s\n", "Hello World!");
    } else {
        printf("Unable to open the file");
    }

    fclose(fptr);
    
    return 0;
}