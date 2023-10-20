#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: A pointer to charcter string to be printed
 * @f: Pointer to the print function
 */
void print_name(char *name, void (*f)(char *))
{
	char *name_copy;

	if (!name && !f)
		return;
	
	name_copy = malloc(sizeof(char) * (strlen(name) + 1));

	if (!name_copy)
		return;

	strcpy(name_copy, name);
	f(name_copy);
	free(name_copy);
}
