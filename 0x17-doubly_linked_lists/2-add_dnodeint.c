#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*add_dnodeint - add a new element at the beginning of the list
*head: the head of the list
*n: the data to be inserted
*Return: the address of the new node, else return NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if(head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	
	new_node->n = n;
	new_node->prev = NULL;

	temp = *head;
	*head = new_node;
	new_node->next = temp;

	if (temp != NULL)
	{
		temp->prev = *head;
	}
	return (new_node);
}
