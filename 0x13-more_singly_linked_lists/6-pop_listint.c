#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: the head of the list
*Return: returns 0 if the list is empty, else the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (data);	
}
