#include "hash_tables.h"
/**
 * key_index - returns the position of a key in a hash table array
 * @key: value used to compute index
 * @size: size of hash table to compute index
 * Return: index number of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);
	return (hash_key % size);
}
