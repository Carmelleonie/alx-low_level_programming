#include <stdio.h>

int main(void)
{/**
*main - Entry point
*
*Description: using the main function
*this program prints the alphabet in lowercase
*Return: 0 Always (success)
*/


	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
