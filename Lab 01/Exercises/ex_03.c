// Write a C program to accept the height of a person in centimeters and categorize the person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average, Height>=165cm – Tall).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;

    // Getting user input
    printf("Enter your height in centimeters: ");
    scanf("%d", &height);

    // Categorizing based on height
    if (height < 150) {
        printf("You are categorized as: Dwarf\n");
    } else if (height == 150) {
        printf("You are categorized as: Average\n");
    } else if (height >= 165) {
        printf("You are categorized as: Tall\n");
    } else {
        printf("You are categorized as: Average\n");
    }

    return 0;
}