#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * pop_listint - Function that dels a node in a linked list
 * @listint_t -pointer to list to be deleted
 * Returns- the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	if (*head != NULL)
	{
		listint_t *temp = *head;
		int data = temp->n;
		*head = temp->next;
		free(temp);
		return(data);
	}
	else
	{
		return (0);
	}
}
