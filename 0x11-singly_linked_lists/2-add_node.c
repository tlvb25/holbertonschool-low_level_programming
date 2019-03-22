#include "lists.h"

/**
 * _strlen - finds the len of a str
 * @str: string to find len of
 *
 * Return: i, len of string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * add_node - adds a new node to the linked list at the start of the list
 * @head: the head of the list
 * @str: the value of the element of the list
 *
 * Return: new_node, or NULL if malloc fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}