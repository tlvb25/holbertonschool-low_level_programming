#include "lists.h"
listint_t *getNode(int n);
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: the linked list passed into function
 * @n: data passed into the function
 * @idx: desired node position 
 *
 * Return: addresss of new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *temp;
        listint_t *new_node;
        

        if (head)
        {
                new_node = malloc(sizeof(listint_t));
                if (!new_mode)
                        return (NULL);
                new_node->n = n;
                new_node->next = NULL;

                if (!idx)
                        return (NULL);
                if (idx == 1)
                {
                        new_node->next = *head;
                        head = new_node;
                }
                temp = *head;
                for (int i = 0; i < idx - 2; i++)
                        temp = temp->next;
                new_node->next = temp->next;
                temp->next = new_node;
                return (newNode);
        }
        return (NULL);
} 
