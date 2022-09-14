#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*this program prints the digit in base 10 starting from 0
*Return: 0 Always (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("% d", n);
	return (0);
}
