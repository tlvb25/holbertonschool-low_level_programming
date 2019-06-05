#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table.
 * @ht: is the hash table being modified
 * @key: is the key used an index
 * @value: value associated with key
 *
 * Return: 1 successful 0 failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *current = NULL;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (!ht || !key)
		return (0);

	current = ht->array[index];
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

	/* Chaining and handles collusion*/
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
