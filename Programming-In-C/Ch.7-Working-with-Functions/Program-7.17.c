// Calculating Factorials Recursively

#include <stdio.h>

int main() {

    unsigned int j;
    unsigned long int factorial(unsigned int n);

    for (j = 0; j < 11; j++)
        printf("%2u! = %lu\n", j, factorial(j));

    return 0;
}

// Recursive function to calculate the factorial fo a positive integer

unsigned long int factorial(unsigned int n) {

    unsigned long int result;
    printf("Calculating factorial(%i)\n", n);
    if (n == 0) {
        result = 1;
    } else {
        result = n * factorial(n-1);
        printf("Done factorial(%i)\n", n);
        /* printf("n = %i and result is %lu\n", n, result); */
    }

    return result;
}
