#include <stdio.h>

int main(void) {

    int n, factorial;
    factorial = 1;

    for (n = 1; n <=10; n++) {
    
        factorial = n * factorial;

    printf("Factorial of %i is %i\n", n, factorial);

    }

    return 0;
}
