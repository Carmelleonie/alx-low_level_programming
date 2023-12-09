#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*delete_dnodeint_at_index - deletes the node at index
*index of a dlistint_t linked list
*@head: the head of the list
*@index: the index of the node to be deleted
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *nodeToDelete;
	int k = index;

	if (k < 0)
	{
		return (-1);
	}
	else if (index == 0 && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
	}
	free(temp);
	if ((*head) != NULL)
	{
		(*head)->prev = NULL;
	}
	else
	{
		temp = *head;
		for (;index != 0; index--)
		{
			if (temp != NULL)
			{
				temp = temp->next;
			}
		}
		if (temp != NULL && temp->next != NULL)
		{
			nodeToDelete = temp->next;
			temp->next = temp->next->next;
		}
		if (temp->next->next != NULL)
		{
			temp->next->next->prev = temp->next;
			free(nodeToDelete);
		}
	}
	free(temp);
	return (1);
}
