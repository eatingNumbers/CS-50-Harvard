#include <stdio.h>

int main(void) {

    char word[] = {'H','e','l','l','o','!'};
    int i;

    for (i = 0; i < 10; i++) {
        printf("%i = ", i);
        printf("%c\n", word[i]);

    }

    printf("\n");
    
    return 0;

}


