// Conditional Statements in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time = 22;

    // if statement
    if (time < 10)
    {
        printf("Good morning!");
    }
    else if (time < 20)
    {
        printf("Good day!");
    }
    else
    {
        printf("Good evening!");
    }

    // switch statement
    int day = 4;

    switch (day)
    {
    case 1:
        printf("\nMonday\n");
        break;
    case 2:
        printf("\nTuesday\n");
        break;
    case 3:
        printf("\nWednesday\n");
        break;
    case 4:
        printf("\nThursday\n");
        break;
    case 5:
        printf("\nFriday\n");
        break;
    case 6:
        printf("\nSaturday\n");
        break;
    case 7:
        printf("\nSunday\n");
        break;
    default:
        printf("\nInvalid day\n");
    }

    // Ternary operator
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    printf("Max value is %d\n", max);

    return 0;
}