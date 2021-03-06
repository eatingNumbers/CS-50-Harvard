#include <stdio.h>

int calculateTriangularNumber (int n) {

    int i, triangularNumber = 0;

    for (i = 0; i <= n; ++i)
        triangularNumber += i;

    printf("Triangular number %i is %i\n", n, triangularNumber);

    return triangularNumber;
}

int main() {

    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);

    return 0;
}
