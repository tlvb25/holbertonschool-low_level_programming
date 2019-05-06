#include "lists.h"

/**
 * add_dnodeint_end - function that inserts new noded at end of list
 * @head; the linked list passed into function
 * @n: data inserted into new node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
		while (last->next)
		{
			last = last->next;
		}

		last->next = newNode;

		newNode->prev = last;

	return (newNode);
}
