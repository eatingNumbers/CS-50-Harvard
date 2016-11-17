#include <stdio.h>

// Function to calculate the absolute value of a number
double absoluteValue(double x) {

    if (x < 0) 
        x = -x;

    return (x);
}

// Function to compute the square root of a number

double squareRoot(double x, double e) {

    double guess = 1;

    while (absoluteValue(guess * guess - x) >= e)
        guess = (x / guess + guess) / 2.0;

    return guess;

}

int main() {

    double ep = .00099;
    double v1 = 2;
    double v2 = 20000000000;
    double v3 = 30000000000;

    printf("squareRoot (%.2f) = %f\n", v1, squareRoot(v1, ep));
    printf("squareRoot (%.2f) = %f\n", v2, squareRoot(v2, ep));
    printf("squareRoot (%.2f) = %f\n", v3, squareRoot(v3, ep));

    return 0;
}
