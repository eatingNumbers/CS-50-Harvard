#include <stdio.h>

int main(void) {

    int n, nSquared;

    printf("\nWhat number do you want squared?\n");
    scanf("%i", &n);

    nSquared = n * 2;

    printf("\nTABLE OF POWERS OF TWO\n\n");
    printf(" n      n-squared\n");
    printf("---     ---------------\n");

    printf("%2i         %i\n", n, nSquared); 

    printf("\n");

    return 0;

}

    
