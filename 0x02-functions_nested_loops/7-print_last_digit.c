#include "main.h"

/**
*print_last_digit - Entry point
*@n: print last digit
*This program prints the last digit of a number
*Return: last digit of n
*/
int print_last_digit(int n)
{
	int m;

	m = (n % 10);

	if (m < 0)
	{
		m = (-1 * m);
	}

	_putchar(m + '0');
	return (m);
}
