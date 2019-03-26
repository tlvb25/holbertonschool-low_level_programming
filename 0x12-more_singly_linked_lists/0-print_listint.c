#include "lists.h"

/**
 * print_listint - prints the elements of listint_t
 * @h: the header pointer passed into the function
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		i++;
		printf("%u\n", h->n);
		h = h->next;
	}
	return (i);
}
