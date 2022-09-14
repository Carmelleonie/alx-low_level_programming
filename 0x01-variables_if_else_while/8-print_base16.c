#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*This function prints all numbers in base 16
*Return: 0 Always (success)
*/
int main(void)
{
	int i;
	char alp;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
