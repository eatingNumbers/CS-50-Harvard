/* Program takes a number from user and performs operations dependent on user input.*/

#include <stdio.h>

int main() {

    float accumulator, value1 = 0; 
    char op;
    int counter = 1;

    while (counter >= 1) {

        printf("What number do you want to begin with? Don't forget to include the operator 's' after your number\n");
        scanf("%f %c", &value1, &op);

            if (op == 'E' || op == 'e') {
                printf("End of program\n");
                counter = 0;
            } else if (op == 'S' || op == 's') {

                printf("= %f\n", accumulator = value1);

                printf("Pick a number and an operator to execute on the previous number.\n");
                scanf("%f %c", &value1, &op);

            }            

            if (op == '+')
            printf("%.2f\n", accumulator + value1);
            else if (op == '-')
                printf("%.2f\n", accumulator - value1);
            else if (op == '/')
                printf("%.2f\n", accumulator / value1);
            else if (op == '*' || op == 'x' || op == 'X')
                printf("%.2f\n", accumulator * value1);

            accumulator = 0; 

    }

    return 0;

}


