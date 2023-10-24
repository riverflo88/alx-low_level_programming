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

int sum_listint(listint_t *head)
{
	if (head != NULL)
	{
		int sum_tray = 0;
		listint_t *current = head;

		while (current->next != NULL)
		{
			sum_tray += current->n;
			current = current->next;

		}

		return (sum_tray += current->n);
	}
	return (0);
}
