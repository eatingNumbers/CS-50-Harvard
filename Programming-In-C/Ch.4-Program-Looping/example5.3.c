#include <stdio.h> 

int main() {
   int i;
   int triangularNumber = 0;
   
   printf("TABLE OF TRIANGULAR NUMBERS\n\n");
   printf(" n   Sum from 1 to n\n");
   printf("---  ---------------\n"); 
   
   for (i = 0; i <= 10; i++) {
        triangularNumber += i;
        printf("%2i            %i\n", i, triangularNumber); 
    }
  
   return 0;

}
