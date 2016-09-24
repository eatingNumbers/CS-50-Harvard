//Modified program to generate prime numbers

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int p, i, primes[50], primeIndex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p = p + 2) {
        isPrime = true;

        printf("p is %i", p);
        printf("primes is %i\n", *primes);
        printf("primeIndex is %i\n", primeIndex);

        for (i = 1; isPrime && p/primes[i] >= primes[i]; i++)
           if (p % primes[i] == 0)
              isPrime = false;

       if (isPrime == true) {
          primes[primeIndex] = p;
          primeIndex++;

        printf("i is %i\n", i);

       }

    } 

    for (i = 0; i < primeIndex; i++)
        printf("%i\n ", primes[i]);

    printf("\n");

}
