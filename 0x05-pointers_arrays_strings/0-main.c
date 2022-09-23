#include "main.h"
#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*Return: 0 Always (success)
*/
int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
