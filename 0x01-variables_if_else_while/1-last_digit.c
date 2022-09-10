#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*main - Entry point
*
*Description: using main function

*Return: 0 (success)
*/
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
		printf("Last digit of %d is %d and is greather than 5\n", n, p);
	else if (p == 0)
		printf("Last digit of %d is 0\n", n);
	else
		printf("Last digit of %d is %d less than 6 and not 0\n", n, p);
	return (0);
}
