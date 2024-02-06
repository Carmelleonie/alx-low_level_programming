#include "lists.h"


/**
*print_listint - Prints all the element in the linked list
*@h: the head of the node
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
