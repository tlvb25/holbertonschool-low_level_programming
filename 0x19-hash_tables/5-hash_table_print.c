#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table being printed
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int checker = 1;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			if (checker == 1)
			{
				printf("'%s': '%s'", current->key, current->value);
				checker = 0;
			}
			else
				printf(", '%s': '%s'", current->key, current->value);
			current = current->next;
		}
		i++;
	}
	printf("}\n");
}
