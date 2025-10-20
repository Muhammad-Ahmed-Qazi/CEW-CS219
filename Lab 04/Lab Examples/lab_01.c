#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    // NULL: memory inaccessible --> memory not allocated
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    } else {
        printf("Memory successfully allocated using malloc.\n");
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            if (i == n-1) {
                printf("%d\n", ptr[i]);
            } else {
                printf("%d, ", ptr[i]);
            }
        }
    }
    
    return 0;
}