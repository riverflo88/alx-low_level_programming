#include <stddef.h>
#include "lists.h"

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

