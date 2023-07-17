#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value from hash table
 * @ht: hash table
 * @key: used to retrive index of hash table array
 * Return: value at key index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;
	unsigned long int idx;

	if (ht && key && *key)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		ptr = ht->array[idx];

		while (ptr)
		{
			if (!strcmp(ptr->key, key))
				return (ptr->value);
			ptr = ptr->next;
		}
	}
	return (NULL);
}
