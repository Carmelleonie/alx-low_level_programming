#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*add_dnodeint_end - add a new node at the end of the list
*@head: the beginning of the list
*@n: the data to be inserted
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t *));

	new_node->n = n;
	
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	temp = (*head);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
