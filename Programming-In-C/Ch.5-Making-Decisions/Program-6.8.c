/* Program to evaluate simple expressions of the form
number o number */

#include <stdio.h>

int main (void) {

    float value1, value2;
    char o;

    printf ("Type in your expression.\n");
    scanf ("%f %c %f", &value1, &o, &value2);

    if ( o == '+' )
        printf ("%.2f\n", value1 + value2);
    else if ( o == '-' )
        printf ("%.2f\n", value1 - value2);
    else if ( o == '*' )
        printf ("%.2f\n", value1 * value2);
    else if ( o == '/' )
        printf ("%.2f\n", value1 / value2);

    return 0;

}
