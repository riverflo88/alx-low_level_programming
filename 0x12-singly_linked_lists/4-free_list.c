#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
    while (head != NULL)
    {
        list_t *free_now = head;
        free(free_now->str);
        free(temp);
	free_now = free_now->next;
    }
}

