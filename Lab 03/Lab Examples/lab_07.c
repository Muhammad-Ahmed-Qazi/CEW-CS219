#include <stdio.h>
#include <stdlib.h>

// Function prototype: getSeconds takes a pointer to unsigned long
void getSeconds(unsigned long *par);

int main () {
    unsigned long sec;  // Declare variable to store seconds
    getSeconds(&sec);   // Call getSeconds and pass address of sec
    printf("Seconds = %lu\n", sec); // Print the value of sec
    return 0;           // Return 0 to indicate successful execution
}

// getSeconds sets *par to the current time in seconds since epoch
void getSeconds(unsigned long *par) {
    *par = time(NULL);  // Assign current time to the location pointed by par
}