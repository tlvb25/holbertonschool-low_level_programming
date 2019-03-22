#include "lists.h"
#include <stdlib.h>
/**
 * print_list - print the values of a linked list, and the length of the values
 * @h: the list to print
 *
 * Return: elements, number of elements in a list.
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int elements = 0;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		printf("[%i] %s\n", temp->len, temp->str);
		temp = temp->next;
		elements++;
	}
	return (elements);
}