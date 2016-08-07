#include <stdio.h>

int main() {
    
    //Exercise 4    
    float numberToConvert = 27.0; 
    float conversionFormula = (numberToConvert - 32) / 1.8; 

    printf("27 fahrenheit is equivalent to %.2f celsius.", conversionFormula);
   
    //Exercise 5 
    char c, d;
    
    c = 'd';
    d = c;
    
    printf("\nd = %c\n", d);
   
    //Exercise 6
    float findx = 2.55;
    float polynomial = (3*(findx*findx*findx)) - (5*(findx*findx)) + 6;

    printf("X is %.2f\n", polynomial);    

    //Exercise 7
    float expression = (3.31e-8*2.01e-7)/(7.16e-6+2.01e-8);
    printf("The answer to the expression is %.e\n", expression);

    //Exercise 8
    int i = 12258;
    int j = 23; 
    int nextMultiple = (i + j) - (i % j);

    printf("The next multiple is: %d\n", nextMultiple);
    return 0;

}
