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
*insert_nodeint_at_index - insert anode at a given position
*@head: the head of the list
*@idx: the index of the list where the new node should be added.
*@n: the data to be inserted 
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *curr_node;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if(idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	curr_node = *head;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (idx == 0)
			{
				new_node->next = (*head);
				(*head) = new_node;
				return (new_node);
			}
			new_node->next = curr_node->next;
			curr_node->next = new_node;
			return (new_node);
			
		}
		else if ((i + 1) == idx)
		{
			curr_node = *head;
		}
		head = &((*head)->next);
		i++;
	}
	
	return (NULL);	
}
