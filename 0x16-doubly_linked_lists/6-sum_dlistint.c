#include "lists.h"

/**
 * sum_dlistint -
 *
 * Return: 
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
