#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *description;
    description = malloc(30 * sizeof(char));

    if ( description == NULL ) {
        printf("Error - unable to allocate required memory.\n");
    } else {
        strcpy(description, "Zara is a CIS student.");
    }

    // suppose you want to store a bigger description
    description = realloc(description, 100 * sizeof(char));

    if ( description == NULL ) {
        printf("Error - unable to allocate required memory.\n");
    } else {
        strcat(description, " She is in second semester.");
    }

    printf("Description: %s\n", description);
    // releasing allocated memory
    free(description);
    
    return 0;
}