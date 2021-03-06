#include "lists.h"
listint_t *getNode(int n);
/**
 * insert_nodeint_at_index - inserts new node at a given position.
 * @head: the linked list passed into function
 * @n: data passed into the function
 * @idx: desired node position
 *
 * Return: addresss of new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newNode;
	uint i;

	temp = *head;

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;
	if (temp || idx == 0 || i == idx - 1)
	{
		newNode = malloc(sizeof(listint_t));
		if (!newNode)
			return (NULL);
		newNode->n = n;
		if (idx == 0)
		{
			newNode->next = *head;
			*head = newNode;
		}
		else
		{
			newNode->next = temp->next;
			temp->next = newNode;
		}
		return (newNode);
	}
	return (NULL);
}
