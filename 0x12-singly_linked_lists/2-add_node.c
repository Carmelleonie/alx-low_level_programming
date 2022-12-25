#include "lists.h"

/**
*add_node - add a new node to the beginning of the linked list
*@head: the head of the linked list
*@str: the string
*Return: the address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}
/**
*_strlen - the lenght of the string
*@str: the string
*Return: the lenght of the string
*/
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] = '\0')
	{
		i++;
	}
	return (i);
}
