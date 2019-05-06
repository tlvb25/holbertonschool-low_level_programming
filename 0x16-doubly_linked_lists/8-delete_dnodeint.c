#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node at index of a dlistint_t linked list
 * @head: the linked list passed into function
 * @index: the index of node to be deleted
 *
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i;

	if (!*head || index <= 0)
		return (-1);

	dlistint_t *current = *head;

	for (i = 1; current && i < index; i++)
		current = current->next;
	if (!current)
		return (-1);

	if (!*head || !current)
		return (-1);
	if (*head == current)
		*head = current->next;
	if (current->next)
		current->prev->next = current->next;
	free (current);
	return (1);
}
