#include "main.h"

/**
*print_sign - Entry point
*
*@n: print singn
*This program prints the sign of numbers
*Return: 1 if n is greather than 0, 0 if n is 0, -1 if n is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
