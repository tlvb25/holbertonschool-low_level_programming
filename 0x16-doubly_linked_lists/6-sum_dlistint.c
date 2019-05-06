#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data in linked list.
 * @head: the linked list passed into the function
 *
 * Return: the sum of data in every node
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
