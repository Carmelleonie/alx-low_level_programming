#include "lists.h"

/**
*listint_len - return the length of the list
*@h: The head of the list
*Return: The number of elements in a linked
*/

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}


/**
*delete_nodeint_at_index - delete the node at a given index
*@head: the head of the list
*@index: the index of the node that should be deleted
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int i = 0;

	if (head == NULL || index > listint_len(*head) || listint_len(*head) == 0)
	{
		return (-1);
	}
	current_node = *head;
	while (*head != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = (*head)->next;
				free(current_node);
				return (1);
			}
			previous_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		else if ((i + 1) == index)
		{
			previous_node = *head;
		}
		head = &((*head)->next);
		i++;
	}
	return (-1);
	
}
