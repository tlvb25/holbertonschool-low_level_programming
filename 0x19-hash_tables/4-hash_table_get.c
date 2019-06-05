#include "hash_tables.h"

/**
 * hash_table_get - the hash table being modified
 *
 * Return: 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int index;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (!strcmp(key, current->key))
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}