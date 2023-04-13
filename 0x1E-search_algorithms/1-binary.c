#include "search_algos.h"
#include <math.h>

/**
*binary_search - a function that searches for a value in
*a sorted array of integers using the Binary search algorithm
*@array: a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: the value to search for
*Return: If value is not present in array or if array is NULL,
*your function must return -1
*/

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low < high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		high = mid - 1;
	}
	return (-1);
}
