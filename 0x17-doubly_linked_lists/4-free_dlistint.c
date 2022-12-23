#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_dlistint - rees a dlistint_t list
*@head: the head of the list
*Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
