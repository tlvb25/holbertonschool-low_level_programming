#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: linked list
 * @index: the desired nth node position
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next_node;
	unsigned int i;
	
	tmp = *head;

	if (*head == NULL)
		return (-1);
	/* If head needs to be removed */
	if (index == 0)
	{
		*head = tmp->next; /* Change head */
		free(tmp); /* free old head  */
		return (1);
	}
	/* Find previous node of the node to be deleted */
	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	/* If position is more than number of nodes */
	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}
	/* Node tmp->next is the node to be deleted */
	/* Store pointer to the next of node to be deleted */
	next_node = tmp->next->next;
	/* Unlink the node from linked list */
	free(tmp->next);
	/*Unlink the deleted node from list*/
	tmp->next = next_node;
	return (1);
}
