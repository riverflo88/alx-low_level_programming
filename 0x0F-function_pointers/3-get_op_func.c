#include "3-calc.h"

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operatior argument
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
    	{
        if (*s == *ops[i].op && s[1] == '\0')
	{
		return (ops[i].f);
		i++;
	}
	}
	return (NULL);
}
