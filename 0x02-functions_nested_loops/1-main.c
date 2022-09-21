#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This function prints the alphabet in lowercase
*Return: 0 Always (success)
*/
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}

	_putchar('\n');
	return (0);
}
