#include "main.h"
#include <stddef.h>

/**
*_puts - print a string
*@str: puts a string followed by a new line
*Return: nohting
*/
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
