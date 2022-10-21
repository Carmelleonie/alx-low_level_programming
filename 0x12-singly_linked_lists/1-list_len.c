#include "lists.h"

/**
*list_len - cunts number of nodes in a linked list
*@h: head of the list
*Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	const list_t *n = h;
	size_t i = 0;

	while (n != NULL)
	{
		i += 1;
		n = n->next;
	}
	return (i);
}
