#include "lists.h"

/**
 *print_list - singly linked list
 *@h: The head of the linked list
 *Description: singly linked list node structure
 *Return: The nodes of the linked list
 */
size_t print_list(const list_t *h)
{
	const list_t *n = h;
	size_t i = 0;

	while (n != NULL)
	{
		if (n->str != NULL)
		{
			printf("[%d] %s\n", n->len, n->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i += 1;
		n = n->next;
	}
	return (i);
}
