#include "lists.h"

/**
 * print_listint - prints a listint_t
 * @h: linked list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	unsigned int count = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
