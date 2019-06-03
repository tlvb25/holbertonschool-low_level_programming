#include "hash_tables.h"

/**
 * key_index - returns index correlating to key
 * @key: the string key given
 * @size: max size of array
 *
 * Return: returns the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
