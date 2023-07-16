#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (0);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (0);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = 0;
	}

	return (table);
}
