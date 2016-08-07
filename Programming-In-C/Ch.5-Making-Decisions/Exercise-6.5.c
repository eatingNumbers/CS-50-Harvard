#include <stdio.h>

int main () {

    int number, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &number);

    do {

        right_digit = number % 10;
        printf("%i", right_digit * -1);
        number /= 10;

    } while (number != 0);
        
        if (number == -number) {
            printf("-");
        }

        printf("\n");

    return 0;

}
