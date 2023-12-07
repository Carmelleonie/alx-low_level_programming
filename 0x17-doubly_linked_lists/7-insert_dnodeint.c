#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*insert_dnodeint_at_index - insert a node at
* a specific position
*@h:The address of the head of the node
*@idx: the position where the node will be inserted
*@n: the data to be inserted
*Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode, *temp;

	for (i = 0; i < idx - 1, temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (idx == 1)
	{
		add_dnodeint(&h, n);
	}
	else if (temp == *h)
	{
		add_dnodeint_end(&h, n);
	}
	if (temp != NULL)
	{
		newnode = malloc(sizeof(dilistint_t *));
		newnode->n = n;
		newnode->next = temp->next;
		newnode->prev = temp;
		if (tmp->nextptr != NULL)
		{
			tmp->next->prev = newnode;
		}
		tmp->next = newnode;
	}
	return (newnode);
}
