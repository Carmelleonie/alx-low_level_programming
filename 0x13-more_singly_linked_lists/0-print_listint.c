#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list.
*@h: pointer to the node
*Return: all the elements in the linked list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *start = h;
	size_t j = 0;

	if (start == NULL)
	{

	}
	while (start != NULL)
	{
		printf("%d\n", start->n);
		start = start->next;
		j += 1;
	}
	return (j);
}
