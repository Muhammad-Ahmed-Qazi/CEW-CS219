#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char greetings[] = "Hello, World!";
    // char greetings[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    printf("%s\n", greetings);

    greetings[0] = 'J';
    printf("%s\n", greetings);

    for (int i = 0; greetings[i] != '\0'; i++) {
        printf("%c ", greetings[i]);
    }

    printf("\nLength of greetings: %zu\n", strlen(greetings));
    strcat(greetings, " How are you?");
    printf("%s\n", greetings);
    strcpy(greetings, "Hi!");
    printf("%s\n", greetings);
    printf("Compare 'A' and 'B': %d\n", strcmp("A", "B"));
    
    return 0;
}