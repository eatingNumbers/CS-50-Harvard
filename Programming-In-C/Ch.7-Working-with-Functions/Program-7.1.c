#include <stdio.h>

void printMessage(void) {
    printf("Programming is fun\n");
}

void printName(void) {
    printf("My name is Dean\n");
}

int main(void) {

    for (int i = 0; i < 5; i++) { 
        printMessage();
        for (int j = 0; j < i; j++)
            printName();
    }

    return 0;

}
