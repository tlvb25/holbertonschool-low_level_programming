#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of linked list
 * @head: the linked list passed into function
 * @index: the index position 
 * 
 * Return: date from node at index position
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
