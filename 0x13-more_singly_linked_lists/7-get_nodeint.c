#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * get_nodeint_at_index - Function gets the data at an index of a list
 * @listint_t -pointer to list to be freed
 * @index - the index to return
 * Returns - returns data at @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		unsigned int count = 0;
		listint_t *current = head;

		while (current->next != NULL)
		{
			if (count == index)
			{
				return (current);
			}
			current = current->next;
			count++;
		}
	}
	return (NULL);
}
