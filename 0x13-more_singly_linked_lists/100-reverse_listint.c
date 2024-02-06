#include "lists.h"

/**
*reverse_listint - reverses a listint_t linked list.
*@head: the head of list
*Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	/*
		Initialize two pointers previous, and curr
	*/
	listint_t *previous_node = NULL, *curr_node;

	/*Check if the list is empty*/

	if (head)
	{
		return (NULL);
	}
	previous_node = (*head);
	(*head) = (*head)->next;
	*head = previous_node;
	curr_node = (*head);
	previous_node->next = NULL;
	while (*head != NULL)
	{
		(*head) = (*head)->next;
		curr_node->next = previous_node;
		previous_node = curr_node;
		curr_node = (*head);
	}
	(*head) = previous_node;
	return (*head);
}
