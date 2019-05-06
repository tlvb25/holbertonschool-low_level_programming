#include "lists.h"

/**
 * add_dnodeint - unction that adds a new node at the beginning of list
 * @head: the linked list passed to function
 * @n: the data inserted into node
 * 
 * Return: the address of thew node
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
	newNode->n = n;
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
