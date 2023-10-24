#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * listint_t: function adds a new node @the beginning of a linked list
 * @head - list(node) to be added
 * @n- data to be added to the node
 * Return: the new node or NULL if nothing
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		printf("Error\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
