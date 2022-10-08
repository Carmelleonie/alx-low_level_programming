#include "main.h"
#include <stdlib.h>

/**
*_calloc - allocates memory for an array
*@nmemb: number of element in the array
*@size: size of memory
*Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		ptr[j] = 0;
	}
	return (ptr);
}
