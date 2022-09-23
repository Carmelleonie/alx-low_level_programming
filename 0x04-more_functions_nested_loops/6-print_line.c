#include "main.h"

/**
*print_line - Entry point
*@n: print line
*Return: returns nothing
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
