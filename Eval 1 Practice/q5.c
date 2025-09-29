// Traverse a string with a pointer and output each character with a '-' in between.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char str[] = "Muhammad Ahmed Qazi";
    char *p = str;
    int i = 0;
    int len = strlen(str) - 1;

    while (i < len) {
        printf("%c-", *p);
        p++;
        i++;
    }
    printf("%c\n", *p);
    
    return 0;
}