// Write a C program to make the following pattern as a pyramid with an asterisk.
//    *
//   * *
//  * * *
// * * * *

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = i; k > 0; k--) {
            printf("* ");
        }
        for (int l = n - i; l > 0; l--) {
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}