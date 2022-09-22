#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This program prints the last digit of a number
*Return: 0 Always (success)
*/
int main(void)
{
	int i;

	print_last_digit(12);
	print_last_digit(0);
	i = print_last_digit(-15);
	_putchar('0' + i);
	_putchar('\n');
	return (0);
}
