#include "hash_tables.h"
/**
*hash_table_create - creates a hash table.
*@size: the size of a hash table array
*Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)

{
	unsigned long int index = 0;
	hash_table_t *item = malloc(sizeof(hash_table_t));

	if (!item)
		return (NULL);
	item->array = malloc(sizeof(hash_node_t **) * size);
	if (!item->array)
	{
		free(item);
		return (NULL);
	}
	while (index < size)
	{
		item->array[index] = NULL;
		index++;
	}
	item->size = size;
	return (item);
}
