#include "lists.h"

/**
*free_listint2 - free the linked list 2
*@head: the head of the linked list
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *new_no = *head;

	while (new_no != NULL)
	{
		listint_t *anode = new_no;

		new_no = new_no->next;
		free(anode);
	}
	*head = NULL;
}
