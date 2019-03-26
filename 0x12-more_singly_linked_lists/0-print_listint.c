#include "lists.h"

/**
 * print_listint - prints a linked list and returns the number of nodes.
 * @h: linked list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
