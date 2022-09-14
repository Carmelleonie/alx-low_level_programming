#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*This function prints single digit numbers from 0
*Return: 0 Always (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
