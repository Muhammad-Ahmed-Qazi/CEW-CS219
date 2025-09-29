// Print the sum of the diagonal elements in a 2x3 matrix using pointers
#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[2][3];
    int sum;
    int (*p)[3] = mat;

    printf("Enter integer elements for the 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", (*(p + i) + j));
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) sum = sum + *(*(p + i) + j);
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);
    
    return 0;
}