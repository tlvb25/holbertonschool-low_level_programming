#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: the pointer to list passed to function
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (!head)
		return;
	current = *head;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
