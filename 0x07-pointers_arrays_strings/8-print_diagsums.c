#include "main.h"
/**
*print_diagsums - prints the sum of the
*two diagonals of a square matrix of integers.
*@a: array
*@size: size of the matrix
*Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size)
	{
		sum1 += a[i + j];
		sum2 += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
