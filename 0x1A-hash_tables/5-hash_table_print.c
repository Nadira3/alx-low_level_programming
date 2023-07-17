#include "hash_tables.h"

/**
 * is_empty - checks if a hash table is empty
 * @ht: hash table
 * @idx: current position/index of array in table
 * Return: 1 if table is empty || 0 otherwise
 */
int is_empty(const hash_table_t *ht, unsigned int idx)
{
	unsigned int i;

	if (ht)
	{
		for (i = idx; i < ht->size; i++)
		{
			if (ht->array[i])
				return (0);
		}
	}
	return (1);
}

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *ptr = NULL;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				ptr = ht->array[i];
				while (ptr)
				{
					printf("\'%s\': \'%s\'", ptr->key, ptr->value);
					ptr = ptr->next;
				}
				if (!ptr && !is_empty(ht, i + 1))
					printf(", ");
			}
		}
		printf("}");
		printf("\n");
	}
}
