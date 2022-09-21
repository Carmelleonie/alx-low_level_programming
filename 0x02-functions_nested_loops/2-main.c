#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This program prints alphabet in lowercase 10 times
*Return: 0 Always (success)
*/
int main(void)
{
	char alp;
	int i;

	i = 0;
	while (i < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
	i++;
	_putchar('\n');
	}
	return (0);
}
