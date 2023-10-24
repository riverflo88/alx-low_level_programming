#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * free_listint - Function that free linked list
 * @listint_t -pointer to list to be freed
 */

void free_listint2(listint_t **head)
{
	if (*head != NULL)
		{
			free_listint2(&((*head)->next));
			free(*head);
			*head = NULL;
		}
}
