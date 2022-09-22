#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This program prints the absolute value of numbers
*Return: 0 Always (success)
*/
int main(void)
{
	int j;

	j = _abs(-10);
	_putchar(j);
	_putchar('\n');
	j = _abs(0);
	_putchar(j);
	_putchar('\n');
	return (0);
}
