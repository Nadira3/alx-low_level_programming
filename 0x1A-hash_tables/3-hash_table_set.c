#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = malloc(strlen(key) + 1);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = malloc(strlen(value) + 1);
	if (!node->value)
	{
		free(node);
		return (0);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL, *ptr = NULL;
	char *key_copy = NULL, *value_copy = NULL;
	unsigned long int idx;

	if (ht)
	{
		if (key && *key && value)
		{
			newNode = create_node(key, value);
			idx = key_index((const unsigned char *)key, ht->size);
			ptr = ht->array[idx];

			if (ptr)
			{
				while(ptr)
				{
					if (!strcmp(ptr->key, key))
					{
						strcpy(ptr->value, value);
						return (1);
					}
					ptr = ptr->next;
				}
				ptr = ht->array[idx];
				
				key_copy = strdup(ptr->key);
				value_copy = strdup(ptr->value);
				strcpy(ptr->key, key);
				strcpy(ptr->value, value);
				ptr->next = newNode;
				strcpy(newNode->key, key_copy);
				strcpy(newNode->value, value_copy);
				free(key_copy), free(value_copy);
			}
			else
				ht->array[idx] = newNode;
			return (1);
		}
	}
	return (0);
}
