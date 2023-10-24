#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/*
 * print_listint - Function prints data in a linked lists 
 * @listint_t - pointer to a linked list
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count =1;

	while(current->next != NULL)
	{
		printf("%d\n", current->n);
	        current = current->next ;
		node_count++;
    	}

	printf("%d\n", current->n);
	return(node_count);
}
