#include "lists.h"

/**
 * print_list - function prints all the elements
 * of a list_t list
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
if (!h)
	return (NULL);
while (h)
	{
		i++;
		h = h->next;
	}
return (i);
}
