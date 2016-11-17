#include <stdio.h>

// Function to calculate the absolute value of a number
float absoluteValue(float x) {

    if (x < 0) 
        x = -x;

    return (x);
}

// Function to compute the square root of a number

float squareRoot(float x, float e) {

    float guess = 1;

    while (absoluteValue(guess / x) >= e)
        guess = (x / guess + guess) / 2.0;

    return guess;

}

int main() {

    float ep = 1;
    float v1 = 10000000000;
    float v2 = 20000000000;
    float v3 = 30000000000;

    printf("squareRoot (%.2f) = %f\n", v1, squareRoot(v1, ep));
    printf("squareRoot (%.2f) = %f\n", v2, squareRoot(v2, ep));
    printf("squareRoot (%.2f) = %f\n", v3, squareRoot(v3, ep));

    return 0;
}
