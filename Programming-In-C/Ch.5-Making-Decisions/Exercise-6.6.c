/* Displays digit input from user to English equivalent of the number.*/

#include <stdio.h>
#include <math.h>

int main() {

    long double newNumber, myNumber, showNumber;

    printf("What number would you like to convert to its English equivalent?\n");
    scanf("%Lf", &myNumber);


    if (myNumber == 0)
        printf("zero");

    
    while (myNumber > 1) {
        myNumber = myNumber / 10;       

    }

    newNumber = myNumber;

    do {

           newNumber = newNumber * 10;
           showNumber = floorf(newNumber * 100/100);           

           if ((showNumber == 0 && newNumber == 0) || showNumber == -1) { 
                break;
           }

           if (showNumber == 1) {
                printf("one "); 
                newNumber = newNumber - showNumber ;

           } else if (showNumber == 2) {
                printf("two "); 
                newNumber = newNumber - showNumber;

           } else if (showNumber == 3) {
                printf("three "); 
                newNumber = newNumber - showNumber;

           } else if (showNumber == 4) {
                printf("four "); 
                newNumber = newNumber - showNumber;

           } else if (showNumber == 5) {
                printf("five ");
                newNumber = newNumber - showNumber;

           } else if (showNumber == 6) {
                printf("six "); 
                newNumber = newNumber - showNumber;
           } else if (showNumber == 7) {
                printf("seven "); 
                newNumber = newNumber - showNumber;

           } else if (showNumber == 8) {
                printf("eight "); 
                newNumber = newNumber - showNumber;

           } else if (showNumber == 9) {
                printf("nine "); 
                newNumber = newNumber - showNumber;

           } else if (newNumber > 0.000009 && showNumber == 0) {
                   printf("zero ");

           } 

    } while ((showNumber != 0 && newNumber != 0) || (showNumber == 0 && newNumber > 0.000009)); {
    
        printf("\n");

    }


}
