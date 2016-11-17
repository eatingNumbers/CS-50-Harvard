/* Exercise #7: Prime numbers can also be generated by an algorithm known as the Sieve of Eratosthenes. The algorithm for this procedure is presented here. Write a program that implements this algorithm. Have the program find all prime numbers up to n = 150. What can you say about this algorithm as compared to the ones used in the text for calculating prime numbers? */

/* Sieve of Eratosthenes Algorithm */

/* To Display All Prime Numbers Between 1 and n */

/* Step 1: Define an array of integers P. Set all elements Pi to 0, 2 <= i <= n. */

/* Step 2: Set i to 2. */

/* Step 3: If i > n, the algorithm terminates. */

/* Step 4: If Pi is 0, then i is prime. */

/* Step 5: For all positive integer values of j, such that i x j ≤ n, set Pixj to 1. */

/* Step 6: Add 1 to i and go to step 3. */

/* 8. Find out if your compiler supports variable-length arrays. If it does, write a small program to test the feature out. */

#include <stdio.h>

int main() {

    int n = 150, P[n], i;

    for (i = 0; i < n; i++) 
        P[i] = 0;
    
    for (i = 2; i < n; i++) {
    
        if (i > n)
            break;
        if (P[i] == 0)
            printf("%i", P[i]);
    
    }


}
