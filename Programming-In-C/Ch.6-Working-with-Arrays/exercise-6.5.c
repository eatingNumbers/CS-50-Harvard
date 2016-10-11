/* Exercise #5 What output do yexpect from the following program? */

#include <stdio.h>

int main (void) {

    int numbers[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j;

    for (j = 0; j < 10; ++j) {
        printf("first loop\n");
        /* printf("j is %d and i is %d\n", j, i); */
        /* printf("numbers = %d\n", numbers[i]); */
        for (i = 0; i < j; ++i) {
            numbers[j] += numbers[i];
            printf("j = %d and i = %d\n", j, i);
            printf("second loop numbers = %d\n", numbers[j]);

        }
    }

        for (j = 0; j < 10; ++j)
            printf ("%i ", numbers[j]);

        printf("\n");

    return 0;
}

