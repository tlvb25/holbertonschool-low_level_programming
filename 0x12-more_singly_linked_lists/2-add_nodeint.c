#include "lists.h"

/**
 * add_nodeint - function that adds a new node to the begining of list
 * @head: the double pointer to the head node of the list
 * @n: the integer value passed to the function
 *
 * Return: new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	if (!head)
		return (NULL);
	/* Put in the data/integer */
	new_node->n = n;

	/* makes new_node point to the node head pointed too */
	new_node->next = *head;

	/*Move head upward to now point to the new_node */
	*head = new_node;

	return (new_node);
}
