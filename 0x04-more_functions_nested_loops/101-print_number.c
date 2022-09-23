#include "main.h"

/**
*print_number - Entry point
*
*@n: print number
*Return: void
*/
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if ((num / 10) != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}