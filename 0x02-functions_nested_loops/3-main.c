#include "main.h"

/**
*main -Entry point
*
*Description: using the main function
*This program prints 1 if the alphabet is in lowercase, otherwise 0
*Return: 0 Always (success)
*/
int main(void)
{
	int j;

	j = _islower('S');
	_putchar(j + '0');
	_putchar('\n');
	return (0);
}
