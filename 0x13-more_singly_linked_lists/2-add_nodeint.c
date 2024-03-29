#include "lists.h"

/**
*add_nodeint - add a node at the beginning of the list
*@head: the head of the list
*@n: the data to be inserted in the list
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}
