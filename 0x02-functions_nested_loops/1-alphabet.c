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
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
	return (0);
}
