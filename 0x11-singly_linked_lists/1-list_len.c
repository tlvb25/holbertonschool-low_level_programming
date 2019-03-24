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
for (i = 0; h; i++)
	{
		if (!h->str)
			return (NULL);
		else
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
