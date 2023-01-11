#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table.
*@ht: is the hash table you want to add or update the key/value
*@key: the key
*@value: the value of the hash table
*Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
	char *newval = NULL;
	hash_node_t *temp = NULL, *newhash = NULL;

	if (!ht || !ht->array || !value)
		return (0);

	if (strlen(key) == 0 || !key)
		return (0);
	newval = strdup(value);
	if (!newval)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	/* checks if a collision exists */
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = newval;
			temp->value = strdup(value);
			free(newval);
			return (1);
		}
		temp = temp->next;
	}
	/* If a collision doesn't exits, insert node */
	newhash = malloc(sizeof(hash_node_t));
	if (!newhash)
	{
		free(newhash);
		return (0);
	}
	newhash->key = strdup(key);
	newhash->value = newval;
	newhash->next = ht->array[index];
	ht->array[index] = newhash;
	return (1);
}
