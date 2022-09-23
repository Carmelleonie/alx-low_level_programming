#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*Return: 0 Always (success)
*/
int main(void)
{
	int a;
	int b;

	a = 12;
	b = 30;
	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}
