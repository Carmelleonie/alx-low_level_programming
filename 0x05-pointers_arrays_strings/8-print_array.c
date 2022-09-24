#include "main.h"

/**
*print_array - prints n element of array
*@a: array
*@n: number of element
*Return: nothing
*/
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		printf("%d", *(a + inc));
		if (inc != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
