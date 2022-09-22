#include "main.h"

/**
*_abs - Entry point
*
*@n: absolute value of an integer
*This program prints the absolute value of an integer
*Return: n
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(n);
	return (n);
	}
	else if (n == 0)
	{
		n = 0;
		_putchar(n);
	return (0);
	}
	else
	{
		n = n;
		_putchar(n);
	return (n);
	}
}
