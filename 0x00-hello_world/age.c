#include <stdio.h>

#define YEAR 2020

int main(void)
{
	int age;
	printf("How old are you? ");
	scanf( "%d", &age );
	int ageold = YEAR - age;
	printf("You were born in the year = %d\n", ageold);
	return (0);
}
