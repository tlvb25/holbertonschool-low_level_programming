#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of list
 * @head: the pointer to the head of the list passed to function
 * @n: the integer value passed into the function
 *
 * Return: the new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
