/* Displays digit input from user to English equivalent of the number.*/

#include <stdio.h>
#include <math.h>

int main() {

    long double newNumber, myNumber, subtractNumber, divideNumber = 10;
    long double toInt; 

    printf("What number would you like to convert to its English equivalent?\n");
    scanf("%Lf", &myNumber);

    if (myNumber == 0) 
        printf("zero");

    while (myNumber > 1) {

        myNumber = myNumber / divideNumber;       
        newNumber = myNumber;
        printf("New number in first while loop is %Lf\n", newNumber);

    }
    
    printf("New number before do while loop is %Lf\n", newNumber);

    do {

           newNumber = newNumber * divideNumber;
           printf("\nnewNumber at the top is %Lf\n", newNumber);
           /* toInt = newNumber; */
           toInt = floorf(newNumber * 100/100);           
           printf("To int is %Lf\n", toInt);

           if ((toInt == 0.000000 && newNumber == 0.000000) || toInt == -1.000000)  {
                break;
            }

           if (toInt >= 1 && toInt < 2) {
                printf("one "); 
                subtractNumber = 1;
                newNumber = newNumber - toInt ;
                /* printf("newNumber at one is %Lf\n", newNumber); */

           } else if (toInt >= 2 && toInt < 3) {
                printf("two "); 
                subtractNumber = 2;
                newNumber = newNumber - subtractNumber;
                /* printf("newNumber at two after subtraction is %Lf", newNumber); */

           } else if (toInt >= 3 && toInt < 4) {
                printf("three "); 
                subtractNumber = 3;
                newNumber = newNumber - subtractNumber;

           } else if (toInt >= 4 && toInt < 5) {
                printf("four "); 
                subtractNumber = 4;
                newNumber = newNumber - subtractNumber;

           } else if (toInt >= 5 && toInt < 6) {
                printf("five ");
                subtractNumber = 5;
                newNumber = newNumber - subtractNumber;
                /* printf("newNumber at five after subtraction %Lf\n", newNumber); */

           } else if (toInt >= 6 && toInt < 7) {
                printf("six "); 
                subtractNumber = 6;
                newNumber = newNumber - subtractNumber;
           } else if (toInt >= 7 && toInt < 8) {
                printf("seven "); 
                subtractNumber = 7;
                newNumber = newNumber - subtractNumber;

           } else if (toInt >= 8 && toInt < 9) {
                printf("eight "); 
                subtractNumber = 8;
                newNumber = newNumber - subtractNumber;

           } else if (toInt >= 9 && toInt < 10) {
                printf("nine "); 
                subtractNumber = 9;
                newNumber = newNumber - subtractNumber;

           } else
                   printf("zero ");
       
            printf("\nNew number at the bottom of the do while loop is %Lf\n", newNumber);


    } while (toInt >= 0.000000 || newNumber <= 0.000000); {
    
        printf("\n");
        /* printf("To int at the end is %Lf\n", toInt); */
        /* printf("New number at the end is %Lf\n", newNumber); */

    }


}
