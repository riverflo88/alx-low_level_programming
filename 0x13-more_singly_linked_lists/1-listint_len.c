#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/*
 * print_listint: function prints data in a linked lists
 * @listint_t - pointer to a linked list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t nodes = 1;

	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}

	printf("%d\n", current->n);
	return (nodes);

}
