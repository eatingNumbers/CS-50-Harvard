// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main (void) {

    int p= 0, d, primeNumber;
    bool isPrime;

    printf("Up to what number do you want to find Prime numbers?\n");
    scanf("%i", &primeNumber);
  
    printf("2 ");

    for ( p = 3; p <= primeNumber; p += 2 ) {
        isPrime = 1;

        for ( d = 2; d < p && isPrime == 1; ++d ) {
            if ( p % d == 0 )
                isPrime = 0;

        }

        if ( isPrime == 1 )
            printf("%i ", p);

    }

    printf ("\n");

    return 0;

}
