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
*get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: the head of the list
*@index: the index of the node
*Return: if the node does not exist, return NULL, else return the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodetoget;
	unsigned int i = 0;

	if (head == NULL || index > listint_len(head))
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				nodetoget = head;
				break;
			}
			head = head->next;
		}
		i++;
	}
	return (nodetoget);
}
