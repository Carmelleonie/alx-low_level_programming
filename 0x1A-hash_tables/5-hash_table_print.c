#include "hash_tables.h"
/**
*hash_table_print -  prints a hash table.
*@ht: the hash table
*Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	int my_int = 1;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
		for (temp = ht->array[index]; temp; temp = temp->next)
		{
			if (my_int)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				my_int = 0;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
		}
	printf("}\n");
}
