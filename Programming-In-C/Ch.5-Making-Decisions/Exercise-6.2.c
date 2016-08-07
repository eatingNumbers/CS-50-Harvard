/* Program to check whether a number is divisible by a second integer. Both values are given by user.*/
 
#include <stdio.h>

int main() {

    int value1, value2;

    printf("What two integers would you like to check?\n");
    scanf("%i %i", &value1, &value2);

    if (value1 >= 1 && value2 >=1) {
        if (value1 % value2 == 0) {
           printf("The first number is divisible by the second number.\n"); 
        } else {
            printf("The first number is not divisible by the second number.\n");
        }

    }

    else
        printf("\nPositive integers only, please.\n");

    return 0;

}
