/* Displays digit input from user to English equivalent of the number.*/

#include <stdio.h>
#include <math.h>

int main() {

    long double newNumber, myNumber, divideNumber = 10;
    float toInt; 

    printf("What number would you like to convert to its English equivalent?\n");
    scanf("%Lf", &myNumber);

    if (myNumber == 0)
        printf("zero");

    while (myNumber > 1) {

        myNumber = myNumber / divideNumber;       
        newNumber = myNumber;
        /* printf("New number in first while loop is %Lf\n", newNumber); */

    }
    
    /* printf("New number before do while loop is %Lf\n", newNumber); */

    do {

           newNumber = newNumber * divideNumber;
           printf("\nnewNumber at the top is %Lf\n", newNumber);
           /* toInt = newNumber; */
           toInt = floorf(newNumber * 100/100);           
           printf("To int is %f\n", toInt);

           if ((toInt == 0 && newNumber == 0) || toInt == -1) { 
                break;
           }

           if (toInt == 1) {
                printf("one "); 
                newNumber = newNumber - toInt ;
                /* printf("newNumber at one is %Lf\n", newNumber); */

           } else if (toInt == 2) {
                printf("two "); 
                newNumber = newNumber - toInt;
                /* printf("newNumber at two after subtraction is %Lf", newNumber); */

           } else if (toInt == 3) {
                printf("three "); 
                newNumber = newNumber - toInt;
                /* printf("newNumber at three after subtraction is %Lf", newNumber); */

           } else if (toInt == 4) {
                printf("four "); 
                newNumber = newNumber - toInt;

           } else if (toInt == 5) {
                printf("five ");
                newNumber = newNumber - toInt;
                /* printf("newNumber at five after subtraction %Lf\n", newNumber); */

           } else if (toInt == 6) {
                printf("six "); 
                newNumber = newNumber - toInt;
           } else if (toInt == 7) {
                printf("seven "); 
                newNumber = newNumber - toInt;

           } else if (toInt == 8) {
                printf("eight "); 
                newNumber = newNumber - toInt;

           } else if (toInt == 9) {
                printf("nine "); 
                newNumber = newNumber - toInt;

           } else if (newNumber > 0.000009 && toInt == 0) {
                   printf("zero ");
           } 

            /* printf("\nNew number at the bottom of the do while loop is %Lf\n", newNumber); */


    } while ((toInt != 0 && newNumber != 0) || (toInt == 0 && newNumber > 0.000009)); {
    
        printf("\n");
        /* printf("To int at the end is %Lf\n", toInt); */
        /* printf("New number at the end is %Lf\n", newNumber); */

    }


}
