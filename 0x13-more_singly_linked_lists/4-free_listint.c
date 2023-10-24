#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * free_listint - Function that free linked list
 * @listint_t -pointer to list to be freed
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
		{
			free_listint(head->next);
			free(head);
		}
}
