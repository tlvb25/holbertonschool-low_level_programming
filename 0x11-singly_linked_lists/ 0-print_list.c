#include "list.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the head/beginning of the linked list
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}