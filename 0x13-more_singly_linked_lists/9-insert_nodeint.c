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
	listint_t *new_n = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL || idx > listint_len(*head))
	{
		free(new_n);
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new_n->next = *head;
				*head = new_n;
				return (new_n);
			}
			new_n->next = prev->next;
			prev->next = new_n;
			return (new_n);
		}
		else if ((i + 1) == idx)
		{
			prev = *head;
		}
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}


/**
*listint_len - the lenght of the list
*@h: the head of the list
*Return: the lenght
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int i = 0;

	if (h == NULL)
	{
	}
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
