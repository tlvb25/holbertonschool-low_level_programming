#include "lists.h"

/**
 * print_listint - prints the elements of listint_t
 * @h: the header pointer passed into the function
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
