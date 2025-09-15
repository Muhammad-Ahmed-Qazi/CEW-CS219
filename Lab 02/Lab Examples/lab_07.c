#include <stdio.h>
#include <stdlib.h>

int main () {
    int matrix[2][3] = {
        {1, 4, 2},
        {3, 6, 8}
    };

    matrix[0][0] = 9; // Change the first element

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}