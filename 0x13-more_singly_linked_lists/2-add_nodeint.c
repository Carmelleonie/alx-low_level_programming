#include "lists.h"

/**
*add_nodeint - add a new node at beginning of the list
*@head: the reference of the head of the list
*@n: the data of the head
*Return:the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = (*head);
	*head = new_n;
	return (new_n);
}
