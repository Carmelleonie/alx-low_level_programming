#include "function_pointers.h"
#include <stdlib.h>

/**
*array_iterator -  given as a parameter on each element of an array
*@array: composed of element
*@size: size of array
*@action: a pointer to the needed function
*Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action == NULL)
		{
			return;
		}
		action(array[i]);
	}
}
