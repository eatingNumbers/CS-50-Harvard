/* Example program #1 from Chapter 10 of Aboslute Beginner's Guide to C, 3rd Edition */

#include <stdio.h>

int main() {

    int ctr = 0;

    ctr = ctr + 1; // Inreases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increase counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increase counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increase counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increase counter to 5
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Inreases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Increase counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Increase counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Increase counter to 1
    printf("Counter is at %d.\n", ctr);

    return 0;

}
