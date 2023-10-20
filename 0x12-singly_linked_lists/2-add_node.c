#include <stddef.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	if (head != NULL && str != NULL)
	{
		list_t *new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		        return NULL;
		new_node->str = strdup(str);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}else{
		return (NULL);
	}
}


