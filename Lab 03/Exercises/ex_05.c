// Write a C program to add two matrices using pointers
#include <stdio.h>
#include <stdlib.h>

int printMat(int (*mat)[2]);

int main () {
    int mat1[2][2], mat2[2][2], sum[2][2];
    int (*p1)[2], (*p2)[2], (*ps)[2];

    p1 = mat1;
    p2 = mat2;
    ps = sum;

    printf("Enter values for matrix 1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", (*(p1 + i) + j));
        }
    }
    printMat(p1);
    printf("Enter values for matrix 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", (*(p2 + i) + j));
        }
    }
    printMat(p2);

    // Summing the two matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(*(ps + i) + j) = *(*(p1 + i) + j) + *(*(p2 + i) + j);
        }
    }
    printf("Sum of matrix 1 & matrix 2:\n");
    printMat(ps);

    return 0;
}

int printMat(int (*mat)[2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
    return 0;
}
