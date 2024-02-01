#include "lists.h"

/**
*add_node - add a new node to the beginning of the linked list
*@head: the head of the linked list
*@str: the string
*Return: the address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *str_duplicated;
	int len = 0;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		return (NULL);
	}
	str_duplicated = strdup(str);
	if (str_duplicated == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (str[len])
	{
		len++;
		
	}
	newnode->str = str_duplicated;
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;
	return(newnode);
}
