#include "main.h"

/**
*times_table - Entry point
*Description: times tables
*This program prints the 9 times tables, starting with 0
*Return: void Always
*/
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{

		for (j = 1; j <= 9; j++)
		{
			n = (i * j);
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
