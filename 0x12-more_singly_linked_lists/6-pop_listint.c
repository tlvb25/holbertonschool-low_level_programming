#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - functino deletes the head node of a
 * listint_t list, and returns the data of the head node
 * @head: head of list
 *
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
