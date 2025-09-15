// Write a C program that takes the height and width of a rectangle as an input from user and compute the perimeter and area of a rectangle.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height, width, perimeter, area;

    // Getting inputs from the user
    printf("Height of the rectangle (m): ");
    scanf("%f", &height);
    printf("Width of the rectangle (m): ");
    scanf("%f", &width);

    // Calculating perimeter and area
    perimeter = 2 * (height + width);
    area = height * width;

    // Printing perimeter and area
    printf("\nPerimeter of the rectangle: %.2fm\n", perimeter);
    printf("Area of the rectangle: %.2fm^2\n", area);

    return 0;
}