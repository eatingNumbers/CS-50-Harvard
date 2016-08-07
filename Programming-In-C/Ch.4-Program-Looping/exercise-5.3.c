#include <stdio.h>

int main(void) {

    int n, triangularNumber;

    for (n = 5; n <= 50; n += 5) {
    
        triangularNumber = n * (n + 1) /2;

    printf("Triangular number %i is %i\n", n, triangularNumber);
    
    } 

    return 0;

}
