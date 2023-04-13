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
	int prev, step, n;

	n = size;
	prev = 0;
	step = sqrt(n);

	while (array[min(step, n) - 1] < value)
	{
		prev = step;
		step += sqrt(n);

		if (prev >= n)
		{
			return (-1);
		}
	}

	while (array[prev] < value)
	{
		prev = prev + 1;
		if (prev == min(step, n))
		{
			return (-1);
		}
	}

	if (array[prev] == value)
	{
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
