#include "lists.h"
/**
*add_nodeint_end - add a new node at the of the linked list
*@head: the head of the node
*@n: the value of thenew node
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *last_n = *head;

	new_n = malloc(sizeof(listint_t));
	if (new_n != NULL)
	{
		new_n->n = n;
		new_n->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (last_n != NULL)
	{
		while (last_n->next != NULL)
		{
			last_n = last_n->next;
		}
		last_n->next = new_n;
	}
	else
	{
		*head = new_n;
	}
	return (new_n);
}
