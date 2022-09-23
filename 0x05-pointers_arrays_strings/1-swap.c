#include "main.h"

/**
*swap_int - value of two integers
*@a: first parameter
*@b: second parameter
*Return: returns void
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
