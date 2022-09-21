#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This program prints the sign of numbers
*Return: 0 Always (success)
*/
int main(void)
{
	int i;

	i = print_sign(8);
	_putchar(',');
	_putchar(' ');
	_putchar(i + '0');
	_putchar('\n');
	return (0);
}
