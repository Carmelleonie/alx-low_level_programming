#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - check if malloc is allocated
*@b: number memory allocated
*Return: pointer to the memory
*/
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (!m)
	{
		exit(98);
	}
	return (m);
}
