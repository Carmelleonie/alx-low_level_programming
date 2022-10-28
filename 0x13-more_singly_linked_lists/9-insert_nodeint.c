#include "lists.h"

/**
*insert_nodeint_at_index - add a new node at a given position
*@head: the head of list
*@idx: the position where the new node will be added
*@n: the value of the new node
*Return: insert_nodeint_at_index
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n;
	listint_t *prev = *head;
	unsigned int i;


	if (prev->next == NULL)
	{
		prev =  *head;
		return (NULL);
	}
	new_n = malloc(sizeof(listint_t));
	for (i = 0; i < idx; i++)
	{
		prev = prev->next;
	}
	new_n->n = n;
	new_n->next = prev->next;
	prev->next = new_n;
	return (new_n);
}
