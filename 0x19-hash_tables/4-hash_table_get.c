#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value that matches key.
 * @ht: the hash table (array) modified
 * @key: the key looked for in table
 *
 * Return: value of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	i = key_index((unsigned char *)key, ht->size);

	temp = ht->array[i];

	while (temp)
	{
		if (!strcmp(key, temp->key))
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
