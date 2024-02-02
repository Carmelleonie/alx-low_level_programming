#include "lists.h"
/**
*add_node_end - a function that adds a new node at the end of a list_t list.
*@head: The head of the list
*@str: The data of to be stored in the list
*Return: the address of the new element, or NULL if it failed
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *str_duplicated;
	int str_ln = 0;

	new_node = malloc(sizeof(list_t));
	
	if (!(new_node))
	{
		return (NULL);
	}
	str_duplicated = strdup(str);
	if (!(str_duplicated))
	{
		free(new_node);
		return (NULL);
	}
	while (str[str_ln])
	{
		str_ln++;
	}
	new_node->str = str_duplicated;
	new_node->len = str_ln;
	new_node->next = NULL;
	if(!(*head))
	{
		(*head) = new_node;
	}
	last_node = (*head);
	while (last_node->next)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	new_node->next = NULL;
	return (*head);
	
}
