#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*This program prints the alphabet in lowercase
*Return: 0 Always (success)
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
		putchar(i);
	}
	putchar('\n');
	return (0);
}
