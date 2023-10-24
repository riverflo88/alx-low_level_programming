#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * add_nodeint_end: function adds a new node @the end of a linked list
 * @head - list(node) to be added
 * @n- data to be added to the node
 * Return: the new node or NULL if nothing
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
                {
                        printf("Error\n");
                        return (NULL);
                }
        newnode->n = n;
        newnode->next = NULL;
        if (*head == NULL)
        {
        	*head = newnode;
        }
        else
        {
		listint_t *current = *head;
		while (current->next != NULL)
                {
			current = current->next;
		}
                current->next = newnode; 
        }
          
	return (newnode);
}
