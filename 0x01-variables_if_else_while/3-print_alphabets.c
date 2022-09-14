#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*This program prints the alphabet in lowercase and uppercase
*Return: 0 Always (success)
*/
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
