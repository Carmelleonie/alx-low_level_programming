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
	int i = 0;

	do {
		printf("% d", i);
		i++;
	} while (i < 10);
	return (0);
}
