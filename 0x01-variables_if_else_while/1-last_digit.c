#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*this program prints wether the last digit is 5,6 0
*Return: 0 Always (success)
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
		printf("Last digit of %d is %d and is greather than 5\n", n, a);
	if (a == 0)
		printf("Last digit of % d is 0 and is 0\n", n);
	if (a < 6 && a != 0)
		printf("Last digit of % d is % d and is less than 6 and not 0\n", n, a);
	return (0);
}
