// The iterations through the loop stops after the value of (line 22) guess * guess
// - x (the given number) is
// less than e (epsilon). Guess is then loaded with a new calculated number
// (line 20).
// Let's take a look at the first printf in main(): The number to find square
// for is 2 and epsilon
// is .00099. Guess is initially 1 and will be updated throughout the loop.
// Guess * guess - x is 1 * 1 - 2 = -1. -1 is then passed through to the
// absoluteValue function to change the sign from negative to positive. Thus, -1
// is 1. Loop body is executed with guess assigned the result of (2 / 1 + 1)
// / 2.0 = 1.5.
// The variable guess is now 1.5. 1.5 * 1.5 - 2 = .25 which is still greater
// than epsilon at .00099. Guess is then assigned the value of (2 / 1.5 * 1.5)
// / 2 which is 1.416667. New guess is now 1.416667.
// 1.416667 * 1.416667 - 2 = .00695. It is still greater than epsilon (.00099).
// (2 / 1.416667 + 1.416667) / 2 = 1.414216. 
// 1.414216 * 1.414216 = .000006895 which is less than epsilon (.00099), thus,
//   stopping the loop. Guess is then returned to main and printed to the
//   console.

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

    while (absoluteValue(guess * guess - x) >= e) {
        guess = (x / guess + guess) / 2.0;
        printf("guess = %f\n", guess);
    }

    return guess;

}

int main() {

    float ep = .00099;

    printf("squareRoot (2.0) = %f\n", squareRoot(2.0, ep));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0, ep));
    printf("squareRoot (17.5) = %f\n", squareRoot(17.5, ep));

    return 0;
}
