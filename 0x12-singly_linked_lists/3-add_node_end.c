#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
        if (head != NULL && str != NULL)
        {
			list_t *current = *head;
			list_t *new_node = malloc(sizeof(list_t));
			if (new_node == NULL)
			{
				free(new_node);
				return NULL;
			}
			if (current == NULL)
			{
				*head = new_node;
			}
			else{
			
				while (current->next != NULL)
					{
						current = current->next;

					}
				current->next = new_node;

			}
			new_node->str = strdup(str);
			new_node->next = NULL;
			new_node->len = strlen(str);
			return (new_node);
        }else{
                return (NULL);
        }
}
