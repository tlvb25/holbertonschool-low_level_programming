#include "lists.h"

/**
 * free_listint - frees memory allocated for listint_t
 * @head: pointer to the list passed into function
 *
 * Return:
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current)
	{
		next = current->next;
		free(current->n);
		free(current);
		current = next;
	}
	head = NULL;
}
