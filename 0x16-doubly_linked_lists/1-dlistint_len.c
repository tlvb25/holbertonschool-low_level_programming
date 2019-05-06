#include "lists.h"

/**
 * dlistint_len - prints number nodes in linked list
 * @h: the linked list passed into function
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;


	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
