#include "lists.h"

/**
*pop_listint - delete the first node of
*the list
*@head: the first node of the list
*Return: the first node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL)
	{
		return (0);
	}
	tmp = *head;
	if (tmp == NULL)
	{
		return (0);
	}

		i = tmp->n
		(*head) = (*head)->next;
		free(tmp);
	}
	return (i);
}
