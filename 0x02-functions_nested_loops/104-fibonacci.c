#include <stdio.h>

/**
*main - Entry point
*
*Return: 0 Always
*/
int main(void)
{
	int counter = 0;
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long fib;

	while (counter <= 97)
	{
		fib = first + second;
		if (counter < 97)
		{
			printf("%lu", fib);
		}
		else
		{
			printf("%lu", fib);
		}
		first = second;
		second = fib;
		counter++;
	}
	printf("\n");
	return (0);
}
