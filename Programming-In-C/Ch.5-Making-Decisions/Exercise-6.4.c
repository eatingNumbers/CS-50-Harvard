/* Program takes a number from user and performs operations dependent on user input.*/
// Note: Can you use a boolean variable for stopping the program?

#include <stdio.h>

int main() {

    float accumulator, value1 = 0; 
    char op;
    /* bool stopProgram; */

    printf("What number do you want to begin with? Don't forget to include the operator\n");
    scanf("%f %c", &value1, &op);

    /* while (value1) { */
        /* printf("Pick a number and an operator to execute on the previous number.\n"); */
        /* scanf("%f %c", &value1, &op); */

       while (op == 'S' || op == 's') {
            printf("= %f\n", accumulator = value1);

            printf("Pick a number and an operator to execute on the previous number.\n");
            scanf("%f %c", &value1, &op);

            if (op == '+')
            printf("%.2f\n", accumulator + value1);
            else if (op == '-')
                printf("%.2f\n", accumulator - value1);
            else if (op == '/')
                printf("%.2f\n", accumulator / value1);
            else if (op == '*' || op == 'x' || op == 'X')
                printf("%.2f\n", accumulator * value1);

        } if (op == 'E' || op == 'e') {
            printf("End of program\n");
            /* break; */
        }

    return 0;
    }


/* } */
