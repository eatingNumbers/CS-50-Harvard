/* Exercise #6: You don’t need to use an array to generate Fibonacci numbers. You can simply use three variables: two to store the previous two Fibonacci numbers and one to store the current one. Rewrite Program 6.3 so that arrays are not used. Because you’re no longer using an array, you need to display each Fibonacci number as you generate it. */

#include <stdio.h>

int main() {

    int Fibonacci[15], i;

    Fibonacci[0] = 0; // By definition
    Fibonacci[1] = 1; // Ditto

    for (i = 2; i < 15; ++i) 
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

    for (i = 0; i < 15; ++i)  
        printf("%i\n", Fibonacci[i]);

    return 0;

}

