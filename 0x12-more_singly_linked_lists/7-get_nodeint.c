#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: linked list passed to function
 * @index: the desired position of node in linked list
 *
 * Return: the data within the indicated-positioned node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        /* This pointer is declare to keep from altering the *header pointer passed to function */
        listint_t *temp;
        /* This integer variable is used to count through to the desired index entered as parameter */
        unsigned int count = 0;

        temp = head;

        while (temp)
        {
                if ( count == index)
                        return (temp->n);
                i++;
                temp = temp->next;
        }
        return (0);
}