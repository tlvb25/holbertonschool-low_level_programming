#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table.
 * @ht: hash table being modified
 * @key: the key to look for
 * @value: value associated with key
 *
 * Return: 1 successful 0 failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL;
	hash_node_t *current = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

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
