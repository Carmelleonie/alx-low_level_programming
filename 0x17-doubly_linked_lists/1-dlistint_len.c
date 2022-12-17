#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*dlistint_len - calcul the lenght of list
*@h: The head of list
*Return:  the number of elements in a linked list
*/


size_t dlistint_len(const dlistint_t *h)
{
	size_t lenght = 0;
	const dlistint_t *current;

	for (current = h; current != NULL; current = current->next)
	{
		lenght++;
	}
	return (lenght);
}
