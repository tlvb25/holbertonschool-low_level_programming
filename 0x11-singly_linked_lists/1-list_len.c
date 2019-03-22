#include "lists.h"

/**
 * list_len - returns the length
 *
 * Return: 
 */
size_t list_len(const list_t *h)
{
    int elements = 0;

    if (h == NULL)
		return (0);
	while (h)
	{
		elements++;
	}
	return (elements);
}