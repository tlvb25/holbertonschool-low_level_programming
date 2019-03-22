#include "lists.h"

/**
 * print_list -
 *
 * Return: 
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int elements = 0;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		printf("[%i] %s\n", temp->len, temp->str);
		temp = temp->next;
		elements++;
	}
	return (elements);
}