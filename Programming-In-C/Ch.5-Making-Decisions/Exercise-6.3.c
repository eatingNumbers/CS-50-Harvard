/* Programm that takes two integers from user and divides the first number from
 * the second. */

#include <stdio.h>

int main() {

    int value1, value2, quotient;

    printf("Please enter two positive integers: \n");
    scanf("%i %i", &value1, &value2);

    if (value1 <= 0 && value2 <= 0) {
      printf("Positive integers only, please.\n");
    } else if (value2 == 0) {
          printf("Division by zero is undefined.\n");
    } else {  
        quotient = value1 / value2;   
        printf("%i divided %i is equal to %i\n", value1, value2, quotient);

    } 

    return 0;

}
