#include "main.h"

/**
*print_rev - print string in reverse
*@s: string in reverse
*Return: nothing
*/
void print_rev(char *s)
{
	int m = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		m++;
	}
	for (b = (m - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
