#include "lists.h"

/**
 * get_dnodeint_at_index -
 *
 * Return:
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	size_t count = 1;

	if (!head || !index)
	{
		return (head);
	}

	while (ptr)
	{
		if (count == index)
		{
			return (ptr->next);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
