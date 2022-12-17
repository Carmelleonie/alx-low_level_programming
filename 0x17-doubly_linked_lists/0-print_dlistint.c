#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_dlistint - my point
*@h: the head of the list
*Return: The numbers of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	for (temp = h; temp != NULL; temp = temp->next)
	{
		len++;
	}
	return (len);
}
