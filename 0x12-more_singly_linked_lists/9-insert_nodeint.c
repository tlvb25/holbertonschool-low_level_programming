#include "lists.h"
listint_t *getNode(int n);
/**
 * insert_nodeint_at_index -
 *
 * Return: 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *temp;
        listint_t *current = *head;

        if (idx < 1 || idx > n + 1)
                return (NULL);
        else
                /* Keep looping until the pos is zero */
                while (idx--)
                {
                        if (idx == 0)
                        {
                                /* adding Node at required postion */
                                temp = getNode(n);

                                /* Making the new Node to point to */
                                /* the old Node at the same position */
                                temp->next = current;

                                /* Changing the pointer of the Node previous */
                                /* to the old Node to point to the new Node */
                                current = temp;
                        }
                        else
                                /* Assign double pointer variable to point to the */
                                /* pointer pointing to the address of next Node */
                                current = &(current->next);
                        }
                        n++;
                }
                return (current);
}

// function to create and return a Node 
listint_t *getNode(int n) 
{ 
    // allocating space 
    listint_t *newNode = newNode = malloc(sizeof(listint_t)); 
  
    // inserting the required data 
    newNode->n = n; 
    newNode->next = NULL; 
    return newNode; 
} 