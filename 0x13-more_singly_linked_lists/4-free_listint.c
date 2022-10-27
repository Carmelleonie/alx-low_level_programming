#include "lists.h"

/**
*free_listint - free the linked list
*@head: the head of the link
*Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *no;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		no = head;
		head = head->next;
		free(no);
	}
}
