#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * sum_listint - Function sums all the data(n) in the linked list
 * @head -pointer to list to be summed
 *
 * Return: the sum of all the data(n) in the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (*head != NULL)
	{
		unsigned int count = 0;
		listint_t *current = *head;

		while (current->next != NULL)
		{
			if (count == idx)
			{
				current->n = n;
				return (&(*current));
			}
			current = current->next;
			count++;
		}

	}
	return (NULL);
}
