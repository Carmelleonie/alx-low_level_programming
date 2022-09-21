#include "main.h"

/**
*print_alphabet_x10 - entry
*
*Description: print alphabet
*This program prints alphabet int lowercase 10 times
*Return: Always void
*/
void print_alphabet_x10(void)
{
	char i;
	int n;

	n = 0;
	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	n++;
	_putchar('\n');
	}
}
