#include "lists.h"

/**
 * free_list - free a list_t
 * @head: address of list to free
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}