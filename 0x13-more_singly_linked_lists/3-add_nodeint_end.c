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
	listint_t *last_n;

	new_n = (listint_t *) malloc(sizeof(struct listint_s));
	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
	}
	while (last_n->next != NULL)
	{
		last_n = last_n->next;
	}
	last_n->next = new_n;
	return (new_n);
}
