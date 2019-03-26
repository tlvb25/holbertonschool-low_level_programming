#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the head node pointer paassed into the function.
 *
 * Return: positive number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}
return (i);
}
