#include <stdio.h>

int main() {

    struct entry {

        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    int i;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    n1.next = &n2;
    n2.next = &n3;

    i = n1.next->value; // This line can also be written as below:
    /* i = (n1.next)->value; */ //[1]
    printf("%i ", i);
    printf("%i\n", n2.next->value);

    return 0;
}

// Reference
// [1]. Dot operator (.) and structure pointer operator have the same precedence and if both are used, the operators are evaluated from left to right.

