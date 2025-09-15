// Getting Input from the User and Escpape Sequences in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userAge;

    // Getting Input from the User
    printf("Enter your age: ");
    scanf("%d", &userAge); // & is used to get the address of the variable
    printf("You entered: %d\n\n", userAge);

    // Escape Sequences
    printf("Hello\tWorld \t(Tab)\n");                 // \t for tab
    printf("Hello\nWorld \t\t(New Line)\n");          // \n for new line
    printf("Hello\bWorld \t(Backspace)\n");           // \b for backspace
    printf("Hello\\World \t(Backslash)\n");           // \\ for backslash
    printf("Hello\rWorld\" \t\t(Carriage Return)\n"); // \r for carriage return
    printf("Hello\"World\" \t(Double Quote)\n");      // \" for double quote

    return 0;
}