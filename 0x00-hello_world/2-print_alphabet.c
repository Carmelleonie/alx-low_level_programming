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
	char alp;

	for (alp = 'a'; 'a' <= 'z'; alp++)
		putchar(alp);

	putchar('\n');
	return (0);
}
