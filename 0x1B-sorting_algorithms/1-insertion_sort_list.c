#include "sort.h"

/**
 * swap_node - swaps two nodes instead swapping data
 * @list: head of linked list
 * @node_a: node a
 * @node_b: node b
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void swap_node(listint_t **list, listint_t **node_a, listint_t **node_b)
{
	listint_t *tmp_prev, *tmp_next;


	tmp_prev = (*node_a)->prev;
	tmp_next = (*node_b)->next;
	if ((*node_a)->prev)
		tmp_prev->next = *node_b;
	else
		*list = *node_b;
	if ((*node_b)->next)
		tmp_next->prev = *node_a;
	(*node_a)->prev = *node_b;
	(*node_b)->next = *node_a;
	(*node_b)->prev = tmp_prev;
	(*node_a)->next = tmp_next;
}

/**
 * insertion_sort_list - function that sorts array of ints using insertion sort
 * @list: doublely linked list of integers
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void insertion_sort_list(listint_t **list)
{
	listint_t *node_a, *node_b, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		node_b = current;
		node_a = current->prev;
		while (node_a && node_b->n < node_a->n)
		{
			swap_node(list, &node_a, &node_b);

			node_a = node_b->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
