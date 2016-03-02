#include <stdio.h>

int main() {
/*	int a;
	a =0;
	while (a <= 100) {
		printf("%4d degrees F = %4d degrees C\n",
				a, (a - 32) * 5 / 9);
			a = a + 10;
	}
	return 0;
*/
	float a;
	printf("What fahrenheit temperature do you want to convert to celsius?");
	scanf("%f", &a);
	while (a <= 100) {
		printf("%6.2f degrees F = %6.2f degrees C\n",
				a, (a - 32.0) * 5.0 / 9.0);
		a = a + 10;
	}
	return 0;
}
