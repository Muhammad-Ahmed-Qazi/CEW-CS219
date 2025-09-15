#include <stdio.h>
#include <stdlib.h>

int main () {
    double marks[5] = {2.5, 5.3, 6.5, 7.5, 8.5};
    // double marks[] = {2.5, 5.3, 6.5, 7.5, 8.5}; // This also works

    marks[4] = 9.5; // Change the last element
    double result = marks[3];

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %.2f\n", i, marks[i]);
    }
    
    return 0;
}