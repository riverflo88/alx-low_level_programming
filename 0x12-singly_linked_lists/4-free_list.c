#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
    while (head != NULL)
    {
        list_t *free_now = head;
        head = head->next;  // Move to the next node before freeing the current one
        free(free_now->str); // Free the string
        free(free_now);      // Free the node
    }
}

