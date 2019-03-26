#include "lists.h"

/**
 * free_listint - frees memory allocated for listint_t
 * @head: pointer to the list passed into function
 *
 * Return:
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
