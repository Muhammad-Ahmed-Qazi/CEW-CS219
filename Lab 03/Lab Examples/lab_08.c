#include <stdio.h>
#include <stdlib.h>

double getAverage(int *arr, int size);

int main () {
    // An int array with 5 elements
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // Pass pointer to the array and size of the array to getAverage
    avg = getAverage(balance, 5);
    // Print the average value
    printf("Average value is: %.2f\n", avg);
    
    return 0;
}

// Function to calculate average of array elements
double getAverage(int *arr, int size) {
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; i++) {
        sum += arr[i]; // Sum up the array elements
    }
    avg = (double)sum / size; // Calculate average
    return avg; // Return the average value
}