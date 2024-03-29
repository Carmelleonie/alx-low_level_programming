#include "search_algos.h"

/**
 *interpolation_search - function that  searches
 *for a value in a sorted array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t index, l, h;
	double r;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		r = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		index = (size_t)(l + r);
		printf("Value checked array[%d]", (int)index);

		if (index >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[index]);
		}

		if (array[index] == value)
			return ((int)index);

		if (array[index] < value)
			l = index + 1;
		else
			h = index - 1;

		if (l == h)
			break;
	}

	return (-1);
}
