#include <stdio.h>

int main(void) {

    int n, nSquared;

    printf("\nTABLE OF POWERS OF TWO\n\n");
    printf(" n          n-squared\n");
    printf("---        ---------------\n");

    nSquared =1;

    for (n = 0; n <= 10; ++n) {

        printf("%2i         %i\n", n, nSquared); 

        nSquared *= 2;

    }

    return 0; 
    
}
