#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fptr;
    int writeData = 1;
    int readData = 1;

    fptr = fopen("lab5.txt", "w+");
    fprintf(fptr, "%d", writeData);
    rewind(fptr);
    fscanf(fptr, "%d", &readData);

    printf("The value from the file is: %d\n", readData);
    fclose(fptr);
    
    return 0;
}