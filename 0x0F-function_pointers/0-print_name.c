#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: A pointer to charcter string to be printed
 * @f: Pointer to the print function
 */
void print_name(char *name, void (*f)(char *))
{

	if (name !=NULL && f !=NULL)
	{
		f(name);
	}
	else{
		return;
	}
}
