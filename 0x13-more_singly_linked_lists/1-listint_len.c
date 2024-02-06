#include "lists.h"
/**
*listint_len - return the length of the list
*@h: The head of the list
*Return: The number of elements in a linked
*/

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
