#include <stdio.h>

#define MAX 10

int a[MAX];
int rand_seed=10;

/* from K&R
   - returns random number between 0 and 32767. */

int rand() {

    rand_seed = rand_seed * 1103515245 + 12345;
    int randomNumber = (unsigned int)(rand_seed / 65536) % 32768;

    return randomNumber;

}

/* bubble sort the array */
void bubbleSort() {
    int t, x, y;

    for (x = 0; x < MAX-1; x++)
        for (y = 0; y < MAX-x-1; y++)
            if (a[y] > a[y+1]) {
            
                t = a[y];
                a[y] = a[y+1];
                a[y + 1] = t;

            }

}

int main() {

    int i;
        
    /* fill array */
    for (i = 0; i < MAX; i++) {
    
        a[i] = rand();
        printf("%d\n", a[i]);

    }

    
    /* print sorted array */
    printf("-----------------\n");

    bubbleSort(); // Calls the bubbleSort function thus sorts the generated numbers in the array.

    for (i = 0; i < MAX; i++)
        printf("%d\n", a[i]);

    return 0;

}
