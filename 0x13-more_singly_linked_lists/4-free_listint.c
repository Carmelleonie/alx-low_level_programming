#include "lists.h"

/**
*free_listint - free the list
*@head: the head of the list
*Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free (node);
	}
}
