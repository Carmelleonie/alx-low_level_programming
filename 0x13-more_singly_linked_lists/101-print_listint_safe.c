#include "lists.h"
/**
*print_listint_safe - prints a listint_t linked list.
*@head: the head of the list
*Return: the number of nodes in the list, else returns the fail status 98
*/

size_t print_listint_safe(const listint_t *head)
{
	int len = 0;

	while (head)
	{
		printf("[%p] %d\n",(void *) head, head->n);
		len++;
		if (head->next <= head)
		{
			 printf("[%p] %d\n", (void *)head->next, head->next->n);
			 exit(98);
		}
		head = head->next;
	}
	return (len);
}
