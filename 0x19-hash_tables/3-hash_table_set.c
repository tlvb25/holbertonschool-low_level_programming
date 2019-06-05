#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table.
 * @ht: is the hash table being modified
 * @key: is the key used as an index (i)
 * @value: value associated with key
 *
 * Return: 1 successful 0 failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL;
	hash_node_t *current = NULL;
	unsigned long int i = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL)
		return (0);

	current = ht->array[i];

	while (current)
	{
		if (!strcmp(current->key, key))
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}


	temp = malloc(sizeof(hash_table_t));
	if (!temp)
		return (0);

	temp->key = strdup(key);

	if (!temp->key)
	{
		free(temp);
		return (0);
	}

	temp->value = strdup(value);

	if (!temp->value)
	{
		free(temp->key);
		free(temp);
		return (0);
	}
	temp->next = ht->array[i];
	ht->array[i] = temp;
	return (1);
}
