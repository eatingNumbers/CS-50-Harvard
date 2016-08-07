#include <stdio.h>

int main(void) {

    int i; 
    int n = 0;

    printf("Table of n and n-squared\n\n");
    printf(" n  Sum from 1 to n\n");
    printf("--- ---------------\n");

    for (i = 0; i <= 10; i++) {
    
        n = i * i;
        printf("%2i             %i\n", i, n);
    
    }

}
