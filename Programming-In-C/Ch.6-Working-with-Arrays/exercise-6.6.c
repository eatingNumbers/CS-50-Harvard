/* Exercise #6: You don’t need to use an array to generate Fibonacci numbers. You can simply use three variables: two to store the previous two Fibonacci numbers and one to store the current one. Rewrite Program 6.3 so that arrays are not used. Because you’re no longer using an array, you need to display each Fibonacci number as you generate it. */

#include <stdio.h>

int main() {

    int F0 = 0, F2 = 1, F3, i;

    for (i = 0; i < 15; ++i) {

        F3 = F0 + F2;
        F0 = F2;
        F2 = F3;
        printf("%i\n", F3);

    }

    return 0;

}

