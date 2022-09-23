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
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			n = i * j;
			if (n <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar('\n');
		}
	}
}