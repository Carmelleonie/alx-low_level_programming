#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
*main - Entry point
*
*Description: using the main function
*Return: 0 Always (success)
*/
int main(void)
{
	char c;
	int i;

	srand(time(0));

	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);

	return (0);
}
