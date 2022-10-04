#include "main.h"
#include <stdlib.h>

/**
*create_array - create an array
*@size: the size of array
*@c: character
*Return: return NULL if size is 0, otherwise pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	if (size == 0)
	{
		return (NULL);
	}
	m = malloc(size * sizeof(char));

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	return (m);
}
