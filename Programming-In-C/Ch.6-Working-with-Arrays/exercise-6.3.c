 /* Program 6.2 permits only 20 responses to be entered. Modify that program so that any number of responses can be entered. So that the user does not have to count the number of responses in the list, set up the program so that the value 999 can be keyed in by the user to indicate that the last response has been entered. (Hint: You can use the break statement here if you want to exit your loop.) */
// Use a while loop for this exercise

#include <stdio.h>

int main() {

    int response;
    int counter = 0;
    int ratingsCounter[999];

    do {
        printf("Enter your response ");
        scanf("%d", &response);

        if (response < 1 || response > 10) {
            printf("Bad response: %i\n", response);
        } else {
            counter++; 
            ++ratingsCounter[response];
        }

    } while (response != 999);

        printf("\n\nRating  Numbers of Responses\n");
        printf("----- -------------\n");

        for (int i = 1; i <= counter; i++) {
            printf("%4i   %4i\n", i, ratingsCounter[i]);
        }

    return 0;

}
