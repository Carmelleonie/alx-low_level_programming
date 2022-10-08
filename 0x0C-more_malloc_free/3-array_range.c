#include "main.h"
#include <stdlib.h>

/**
*array_range - create an array of integers
*@min: the minimum element in the array
*@max: the maximum element in the array
*Return: void
*/
int *array_range(int min, int max)
{
	int a, b = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(ptr) * ((max - min) + 1));
	if (!ptr)
	{
		return (NULL);
	}
	for (a = min; a <= max; a++)
	{
		ptr[a] = a;
		b++;
	}
	return (ptr);
}
