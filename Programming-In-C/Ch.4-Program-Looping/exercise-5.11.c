#include <stdio.h>

int main(void) {

    int number, parseNumber, sum;
    
    sum = 0;

    printf("Enter your number: \n"); 
    scanf("%i", &number);

    while (number >= 1) {

        parseNumber = number % 10;
        number /= 10;
        sum = sum + parseNumber;  

    }

    printf("Your number and the sum of its digits is: %i\n", sum);

}
