#include "hash_tables.h"

/**
 * free_node - frees a node
 * @node: node to be freed
 */
void free_node(hash_node_t *node)
{
	hash_node_t *ptr = node, *temp = node;

	if (node)
	{
		while (ptr)
		{
			ptr = ptr->next;
			free(temp->key);
			free(temp->value);
			temp = ptr;
		}
		free(node);
	}
}

/**
 * hash_table_delete - deletes/frees a hash table
 * @ht: hash table to be freed
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		free_node(ht->array[i]);
	}
	free(ht);
}
