#include "search_algos.h"
#include <math.h>

/**
*jump_search - a function that searches for a value in
*a sorted array of integers using the Jump search algorithm
*@array: a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: the value to search for
*Return: If value is not present in array or if array is NULL,
*your function must return -1
*/

int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
/**
*min - search for the min of two values
*@a: the first parameter
*@b: the second parameter
*Return: a if a is lower than b, else b
*/

int min(int a, int b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}
