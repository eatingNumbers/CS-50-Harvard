#include <stdio.h>

int main(int aargc, char *argv[]) {
	int distance = 100;
	float power = 2.345f;
	double superPower = 56789.4532;
	char initial = 'V';
	char firstName[] = "Max";
	char lastName[] = "Powers";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", superPower);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", firstName);
	printf("I have a last name %s.\n", lastName);
	printf("My while name is %s %c. %s. \n", firstName, initial, lastName);
	return 0;
}
