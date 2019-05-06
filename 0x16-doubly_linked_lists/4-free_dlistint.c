#include "lists.h"

/**
 * free_dlistint - function that frees a linked list
 * @head: the linked list passed to function
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (current != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
