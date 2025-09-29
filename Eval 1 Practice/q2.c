// Count the number of vowels in a string entered by a user using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char str[100];
    int vowel_count = 0;
    char *p = str;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    while (*p != '\0') {
        if (strchr("aeiouAEIOU", *p)) {
            vowel_count++;
        }
        p++;
    }

    printf("Total number of vowels: %d\n", vowel_count);

    return 0;
}