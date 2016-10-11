/* Exercise #4: Write a program that calculates the average of an array of 10 floating-point values. */

#include <stdio.h>

int main() {

    float calcArray[10];
    float addedArray = 0;

    for (int j = 0; j < 10; j++) {
        printf("Enter a number: ");
        scanf("%f", &calcArray[j]);
    }

    for (int i = 0; i < 10; i++)
        addedArray += calcArray[i]; 
   
    addedArray /= 10;

    printf("Average of your numbers is: %.2f\n", addedArray);

    return 0;

}
