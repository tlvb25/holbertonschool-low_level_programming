#include "lists.h"
void
/**
 * pop_listint - deletes head node and return data of head node
 * @head: double pointer of the linked list passed to function
 *
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;

	if (!head)
		return (0);
	next_node->n = (*head)->n;
	next_node->next = (*head)->next;
	free(*head);
	*head = next_node;

	return ((*head)->n);

}
