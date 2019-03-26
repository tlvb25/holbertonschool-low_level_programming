#include "lists.h"

/**
 * print_listint - prints a listint_t .
 * @h: linked list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp_ptr = h;
	size_t count = 0;

	while (tmp_ptr)
	{
		printf("%d\n", tmp_ptr->n);
		count++;
		tmp_ptr = tmp_ptr->next;
	}
	return (count);
}
