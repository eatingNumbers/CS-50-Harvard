// The program opens the existing book info file from the first example of
// Chapter 28, and adds a line to the end.

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

int main() {

    fptr = fopen("/Users/dean/Development/CS-50-Harvard/Absolute-Beginner/BookInfo.txt", "a");

    if (fptr == 0) {
    
        printf("Error opening the file! Sorry!\n");
        exit(1);
    }

    // Adds the line at the end.
    fprintf(fptr, "\nMore books to come!\n");

    fclose(fptr);
    return(0);
}
