#include "lists.h"

/**
 * _strlen - find the len of a str
 * @str: str to find len of
 *
 * Return: i, len of str
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: start of linked list to add to
 * @str: string to add to linked list
 *
 * Return: address of new_node, or NULL if malloc fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
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