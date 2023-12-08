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
	/*Create new nodes*/
	dlistint_t *new_node;

	/*Allocate a size for the new nodes*/
	new_node = malloc(sizeof(dlistint_t *));
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	/*If the liste is empty, make the new node to be the head*/
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
