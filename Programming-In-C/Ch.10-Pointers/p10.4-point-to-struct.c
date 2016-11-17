#include <stdio.h>

int main() {

    struct date {
    
        int month;
        int day;
        int year;
    } today, *datePtr; // This declaration is the same as the one below.
    /* struct date today, *datePtr; */

    datePtr = &today;
    
    //The line below yields the same results as the one below it.
    /* (*datePtr).month = 9; */     
    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->month,datePtr->day,datePtr->year % 100);

    return 0;
}
