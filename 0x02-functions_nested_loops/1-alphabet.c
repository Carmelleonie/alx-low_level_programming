#include "main.h"

/**
*print_alphabet - entry
*
*Description: print_alphabet
*This program prints the alphabet in lowercase
*Return:Always void
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
