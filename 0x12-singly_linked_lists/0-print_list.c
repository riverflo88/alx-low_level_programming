#include <stddef.h>
#include "lists.h"

/**
 *print_list - Function that prints the number of nodes given
 *@list_t: node/slinked list
 *
 *Return: count of the node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL){
		char *n = h->str;
		if (n == NULL){
			printf("[0] (nil)\n");
		
		}else{
		printf("[%lu] %s\n",strlen(n), n);
		
		}
		h = h->next;
		count++;
	}
	return count;
}

