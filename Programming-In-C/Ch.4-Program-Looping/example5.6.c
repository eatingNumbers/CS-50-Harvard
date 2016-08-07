#include <stdio.h>

int main() {

    int count = 1;
    int counter = 1;

    while (count <= 5) {
    
        printf("%i\n", count);
        count++;

    }
    
    printf("\n");
    
    for (; counter <=5; counter++) {
    
        printf("%i\n", counter);

    }

    return 0;

}
