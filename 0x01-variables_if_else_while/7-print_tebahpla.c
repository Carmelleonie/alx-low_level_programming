#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*This progam prints the alphabet in lowercase
*Return: 0 Always (success)
*/
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
