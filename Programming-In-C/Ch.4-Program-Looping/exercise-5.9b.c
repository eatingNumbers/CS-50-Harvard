#include <stdio.h>

int main(void) {

    int n, nSquared;

    printf("\nTABLE OF POWERS OF TWO\n\n");
    printf(" n          n-squared\n");
    printf("---        ---------------\n");

    n = 0;
    nSquared =1;

    while (n <= 10) {

        printf("%2i         %i\n", n, nSquared); 

        nSquared *= 2;
        n++;

    }

    return 0; 
    
}
