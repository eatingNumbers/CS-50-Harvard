#include <stdio.h>

int main() {

    int ratingCounters[999], i, response, counter = 0;

    printf("Enter your responses\n");

    for (i = 1; i < counter + 2; i++) {
        scanf("%i", &response);

        if (response == 999)
            break;

        if (response < 1 || response > 10) {
           printf("Bad response: %i\n", response);
        } else {
           ++ratingCounters[response];
        }
            
      counter++; 

    } 

    printf("\n\nRating  Numbers of Responses\n");
    printf("----- -------------\n");

    for (i = 1; i <= counter; i++) {
        printf("%4i   %4i\n", i, ratingCounters[i]);

    }

    return 0;

}
