/**
 * https://www.hackerrank.com/challenges/runningtime
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int aux;
    int shift = 0;
    int arraySize = 0;
    int array[1001];
    
    // Read de size of array
    scanf("%d", &n);

    // Iterate N times
    while (n--) {
        scanf("%d", &aux);

        // Iterate over array to find the aux position
        int position = arraySize;
        for (; position > 0 && aux < array[position-1]; position--) {
            array[position] = array[position-1];
            shift++;
        }

        array[position] = aux;
        arraySize++;
    }

    // Output the amount of shifts
    printf ("%d\n", shift);
    
    
    return 0;
}

