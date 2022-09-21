#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This program prints letters
*Return: 0 Always (success)
*/
int main(void)
{
	int j;

	j = _isalpha('a');
	_putchar(j + '0');
	j = _isalpha('D');
	_putchar(j + '0');
	j = _isalpha('3');
	_putchar(j + '0');
	_putchar('\n');
	return (0);
}
