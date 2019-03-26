#include "lists.h"

/**
 * print_listint -
 *
 * Return:
 */
size_t print_listint(const listint_t *h)
{
	unsigned int elements = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (h)
	{
		elements++
		h = h->next;
	}
return (i);
}
