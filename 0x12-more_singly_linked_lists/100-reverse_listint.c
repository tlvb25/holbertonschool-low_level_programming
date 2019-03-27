#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: linked list passed into the function
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt;
	listint_t *prev = NULL;

	while (*head)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
