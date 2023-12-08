#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_dlistint - sum the values hold in each node of the
*linked list
*@head: the head of the list
*Return: the sum all the data (n) of a dlistint_t linked list
*if the list is empty return null
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int k = 0;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		k += temp->n;
	}
	return (k);
}
