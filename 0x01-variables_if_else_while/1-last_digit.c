#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*main - Entry point
*
*Description: using main function
*this program prints n % 10 is greather than 5, less than 6 or diffent from 0
*Return: Always 0 (success)
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
	else if (p < 6 && p != 0)
		printf("Last digit of %d is %d less than 6 and not 0\n", n, p);
	return (0);
}
