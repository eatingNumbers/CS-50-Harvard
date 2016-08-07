#include <stdio.h>

int main () {

    int number, right_digit;
    int sign;

    printf("Enter your number.\n");
    scanf("%i", &number);

    if (number != 0)
        sign = (number/number) + number;
    else 
       sign = 0; 

    do {

        if (sign < number || sign < 0) {
            right_digit = number % 10;
            printf("%i", right_digit * -1);
            number /= 10;
        } else {    
            right_digit = number % 10;
            printf("%i", right_digit);
            number /= 10;
        }

    } while (number != 0);
        
        if (sign < number) {
            printf("-");
        } else {
           printf(" "); 
        }
        printf("\n");

    return 0;

}
