#include <stdio.h>

int main (void) {

    int counter = 0;

    while (counter <= 5) {

        int n, number, triangularNumber;

        n = 0;
        triangularNumber = 0;

        printf ("What triangular number do you want? ");
        scanf ("%i", &number);

        ++counter; 

        while (n <= number) { 

            triangularNumber += n;

            ++n;
        
        }

        printf ("Triangular number %i is %i\n\n", number, triangularNumber);

    }

    return 0;

}
