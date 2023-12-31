#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Function that prints a listint_t list 
 * @head: pointer to the first node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t new_n;
	const listint_t *tmp_n = NULL;
	const listint_t *len = NULL;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		count++;
		tmp_n = tmp_n->next;
		len = head;
		new_n = 0;
		if (!head)
			exit(98);
		while (new_n < count)
		{
			if (tmp_n == len)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (count);
			}
			len = len->next;
			new_n++;
		}
	}
	return (counter);
}
