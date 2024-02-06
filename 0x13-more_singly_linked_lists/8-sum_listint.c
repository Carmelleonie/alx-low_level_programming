#include "lists.h"

/**
*sum_listint - calculate the sum of all data in the list
*@head: the head of the list
*Return: if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
