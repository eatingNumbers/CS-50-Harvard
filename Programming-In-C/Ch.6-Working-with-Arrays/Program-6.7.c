// Program to convert a positive integer to another base
#include <stdio.h>

int main (void) {

    const char baseDigits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    // Get the number and the base
    
    printf("Number to be converted? ");
    scanf("%ld", &numberToConvert);
    printf("Base? ");
    scanf("%i", &base);

    // Convert to the indicated base

    do {
        convertedNumber[index] = numberToConvert % base;
        index++;
        printf("index is %d\n", index);
        numberToConvert = numberToConvert / base; // numberToConvert a countdown to zero and throw away any decimal numbers.
        printf("numberToConvert = %ld\n", numberToConvert);
        printf("convertedNumber[0] = %d\n", convertedNumber[0]);
        printf("convertedNumber[1] = %d\n", convertedNumber[1]);
        printf("convertedNumber[2] = %d\n", convertedNumber[2]);
    } while
        (numberToConvert != 0);

        // Display the results in reverse order from the last index to the first
        
        /* printf("Converted number = "); */
        printf("For Loop Below------\n");
        for (--index; index >= 0; --index) {
            printf("index is %d\n", index);
            nextDigit = convertedNumber[index];
            printf("Next digit is %d\n", nextDigit);
            printf("baseDigit reference is %c\n", baseDigits[nextDigit]);
        }

    printf("\n");
    printf("1000 modulo 16 = %d\n", 1000 % 16);
    printf("62 modulo 16 = %d\n", 62 % 16);
    printf("8 modulo 16 = %d\n", 8 % 16); 
    printf("3 modulo 16 = %d\n", 3 % 16); 
    return 0;

}
