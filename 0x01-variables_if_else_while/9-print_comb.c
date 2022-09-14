#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*This function prints all possible combinaisons of single digit
*Return: 0 Always (success)
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
