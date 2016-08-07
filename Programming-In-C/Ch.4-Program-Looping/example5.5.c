#include <stdio.h>

int main() {
    
    int n, number, triangularNumber, counter;

    for (counter = 0; counter <= 5; counter++) {
    
        printf("What numbers do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 0; n <= number; n++) 
        
            triangularNumber += n;

            printf("Triangular Number %i is %i\n\n", number, triangularNumber);  

    }

    return 0;

}
