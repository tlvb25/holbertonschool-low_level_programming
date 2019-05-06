#include "lists.h"

/**
 * insert_dnodeint_at_index -
 *
 * Return: 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *ptr = *h;
	size_t count = 1;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	while (ptr)
	{
		if (count == idx)
			break;
		count++;
		ptr = ptr->next;
	}
	if (count != idx)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = ptr->next;
	newNode->prev = ptr;

	if (ptr->next)
	{
		(ptr->next)->prev = newNode;
	}
	ptr->next = newNode;
	return (newNode);
}