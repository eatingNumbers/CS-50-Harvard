#include <stdio.h>

// Function to sum the elements of an integer array Ver.2

int arraySum(int *array, const int n) {

    int sum = 0;
    int *const arrayEnd = array + n;

    for (; array < arrayEnd; array++)
        sum += *array;

    return sum;
}

int main() {

    int arrayEnd(int *array, const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    for (int i = 0; i < 10; i++)
        printf("Values[%i] = %i\n", i, values[i]);

    return 0;
}   

