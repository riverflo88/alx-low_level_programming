#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
    while (head != NULL)
    {
        list_t *free_now = head;
        head = head->next; 
        free(free_now->str); 
        free(free_now);   
    }
}

