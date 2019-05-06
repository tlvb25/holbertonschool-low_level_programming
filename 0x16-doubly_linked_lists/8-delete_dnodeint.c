#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes node at index 
 * @head: the linked list passed into function
 * @index: the index of node to be deleted
 *
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (!*head || index <= 0)
		return (-1);

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
	free(current);
	return (1);
}
