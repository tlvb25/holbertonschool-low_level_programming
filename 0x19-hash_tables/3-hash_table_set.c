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
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *temp, *new;

	if (!ht || !key || !*key || !value)
		return (0);

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (temp) 
	{
		free (temp->value);
		temp->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
