#include "lists.h"

/**
 * add_dnodeint -
 *
 * Return:
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (!head)
		return (NULL);

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	/* put data in newNode */
	newNode->n = n;
	/* Make next of new node as head and previous as NULL */
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head)
	{
		newNode->next = *head;

		(*head)->prev = newNode;

		*head = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
