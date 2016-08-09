/* Displays digit input from user to English equivalent of the number.*/

#include <stdio.h>

int main() {

    float a = -.12345;
    float b = a * -10;
    float c = b - 1;
    float d = c * -10 * -1;
    float e = d - 2;

    printf("%f\n", e);

    float newNumber, myNumber, rightDigit;
    int toInt; 

    printf("What number would you like to convert to its English equivalent?\n");
    scanf("%f", &myNumber);

    while (myNumber > 1) {
    rightDigit = (int)  myNumber % 10;
    myNumber = myNumber / 10;       
    newNumber = myNumber;
    /* printf("New number in first while loop is %f\n", newNumber); */
    }
    
    /* printf("New number before do while loop is %f\n", newNumber); */

    do {

           newNumber *= - 10;
           /* newNumber *= -1; */
           printf("newNumber at the top is %f\n", newNumber);
           toInt = (int) newNumber;
           printf("To int is %i\n", toInt);
           
           if (toInt == -1) {
                printf("one "); 
                newNumber = toInt - newNumber;
                printf("newNumber at one is %f\n", newNumber);
           } else if (toInt == 2) {
                printf("two "); 
                newNumber = newNumber - toInt;
                printf("newNumber at two after subtraction is %f", newNumber);
           } else if (toInt == 3) {
                printf("three "); 
                newNumber = newNumber - toInt;
           } else if (toInt == 4) {
                printf("four "); 
                newNumber = newNumber - toInt;
           } else if (toInt == 5) {
                printf("five ");
                newNumber = newNumber - toInt;
           } else if (toInt == 6) {
                printf("six "); 
                newNumber = newNumber - toInt;
           } else if (toInt == 7) {
                newNumber = newNumber - toInt;
                printf("seven "); 
           } else if (toInt == 8) {
                newNumber = newNumber - toInt;
                printf("eight "); 
           } else if (toInt == 9) {
                newNumber = newNumber - toInt;
                printf("nine "); 
           } 
           else
                   printf("zero ");
       
            printf("\nNew number at the bottom of the do while loop is %f\n", newNumber);

    } while (newNumber > 0.09); {
    
        printf("\n");
        /* printf("To int at the end is %i\n", toInt); */
        /* printf("New number at the end is %f\n", newNumber); */

    }


}
