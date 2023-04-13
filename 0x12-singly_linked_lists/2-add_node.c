#include "lists.h"

/**
*add_node - add a new node to the beginning of the linked list
*@head: the head of the linked list
*@str: the string
*Return: the address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode, temp;

	if (*head == NULL)
	{
		*head = temp;
	}
	temp = (*head);
	newnode = malloc(sizeof(list_t));
	newnode->str = strdup(str);
	newnode->next = temp;
	newnode = temp;
	return (newnode);
}
