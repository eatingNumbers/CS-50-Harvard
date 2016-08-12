// Program to generate a table of prime numbers
// Skip checking of even numbers 
// Add a test case for isPrime in the second for loop condition 

#include <stdio.h>
#include <stdbool.h>

int main (void) {

    int p, d, primeNumber;
    bool isPrime;

    printf("Up to what number do you want to find Prime numbers?\n");
    scanf("%i", &primeNumber);

    printf("2 ");

    for ( p = 3; p <= primeNumber; p += 2 ) {
        isPrime = 1;

            for ( d = 2; d < p && isPrime != 0; d++ ) 
                if ( p % d == 0 )
                    isPrime = 0;

        if ( isPrime != 0 )
            printf ("%i ", p);
    }

    printf ("\n");

    return 0;

}
