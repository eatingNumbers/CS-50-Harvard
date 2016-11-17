#include <stdio.h>

// Function to calculate the absolute value of a number
float absoluteValue(float x) {

    if (x < 0) 
        x = -x;

    return (x);
}

// Function to compute the square root of a number

float squareRoot(float x, float e) {

    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= e)
        guess = (x / guess + guess) / 2.0;

    return guess;

}

int main() {

    float ep = .00099;

    printf("squareRoot (2.0) = %f\n", squareRoot(2.0, ep));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0, ep));
    printf("squareRoot (17.5) = %f\n", squareRoot(17.5, ep));

    return 0;
}
