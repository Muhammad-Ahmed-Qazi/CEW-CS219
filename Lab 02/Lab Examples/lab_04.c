#include <stdio.h>
#include <stdlib.h>

int main () {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("Value of i: %d\n", i);
    }
    
    return 0;
}