/* Program to evaluate simple expressions of the form
value o value */

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
        if ( value2 == 0 )
            printf ("Division by zero.\n");
        else
        printf ("%.2f\n", value1 / value2);
    else
        printf ("Unknown operator.\n");

    return 0;

}
