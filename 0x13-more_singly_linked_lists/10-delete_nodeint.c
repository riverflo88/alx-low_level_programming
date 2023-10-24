#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        if (*head != NULL)
        {
                unsigned int count = 0;
                listint_t *current = *head;
                listint_t *before_current = current;
				if (index == 0)
				{
						if (current->next == NULL)
						{	
							free(*head);
							return (1);
						}
						*head = current->next;
						free(current);
						return (1);
				}
                while (current->next != NULL)
                {
                        
                        if (count == index)
                        {
                                before_current->next = current->next;
                                free(current);
                                return (1);
                        }
                        before_current = current;
                        current = current->next;
                        count++;
                }
                before_current->next = NULL;
                free(current);
				
                return (1);
        }        
		return (-1);
}

