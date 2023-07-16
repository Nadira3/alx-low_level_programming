#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;
	unsigned long int idx;

	if (key && *key)
		idx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[idx];

	while (ptr)
	{
		if (!strcmp(ptr->key, key))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (0);
}
