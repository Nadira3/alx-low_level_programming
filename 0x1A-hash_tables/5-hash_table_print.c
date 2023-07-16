#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *ptr = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			while (ptr)
			{
				printf("%s: %s", ptr->key, ptr->value);
				ptr = ptr->next;
			}
		}
	}
}
