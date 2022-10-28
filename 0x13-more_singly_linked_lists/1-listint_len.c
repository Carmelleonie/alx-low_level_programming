#include "lists.h"

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
