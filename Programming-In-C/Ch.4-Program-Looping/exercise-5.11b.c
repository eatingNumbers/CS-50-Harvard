#include <stdio.h>

int main() {

    int number, parseNumber, sum;

    sum = 0;

    printf("Enter a number: ");
    scanf("%i", &number);

   for (; number != 0; number/=10) {

       parseNumber = number % 10;
       sum = sum + parseNumber;
   
   }
    
   printf("Your number and the sum of its digits is: %i \n", sum);
   
   return 0;

}
