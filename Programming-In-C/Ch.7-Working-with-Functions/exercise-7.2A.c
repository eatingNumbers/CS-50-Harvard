#include <stdio.h>

int  number, triangularNumber;

int main() {

    int calculateTriangularNumber(int n);

    printf("What triangular number do you want?");
    scanf("%i", &number);

    calculateTriangularNumber(number);

    return 0;

}

int calculateTriangularNumber(int n) {

    triangularNumber = 0;

    for (n = 0; n <= number; ++n) 
        triangularNumber += n;

    printf("Triangular number %i is %i\n", number, triangularNumber);

    return triangularNumber;
}
