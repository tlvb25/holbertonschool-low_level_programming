#include "lists.h"

/**
 * sum_listint - function that calcs sum of all the data of listint_t linked
 * @head: the linked list passed into function
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	unsigned int sum = 0;

	if (!ptr)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
