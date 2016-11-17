#include <stdio.h>

long int x_to_the_n(int x, int n) {

    long int answer;

    if (x < 0)
        x = -x;

    if (n < 0)
        n = -n;

    for (int i = 0; i < n; i++)
        answer = x * x;

    return answer;
}

int main() {

long int x_to_the_n(int x, int n);
int x, n;

printf("Give me an integer and another for the power: ");
scanf("%i %i", &x, &n);

printf("Result = %ld\n", x_to_the_n(x, n));

return 0;
}
