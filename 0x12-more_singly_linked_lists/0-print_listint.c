#include "lists.h"

/**
 * print_listint - prints the elements of listint_t
 * @h: the header pointer passed into the function
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		printf("%u\n", h->n);
		h = h->next;
	}
	return (i);
}
