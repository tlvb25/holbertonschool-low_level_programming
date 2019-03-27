#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: the pointer to list passed to function
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		*head = head;
		free(current);
	}
	*head = NULL;
}
