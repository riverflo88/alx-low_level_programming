#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The string representation of the binary number
 * Return: the unsigned int representation of the binary number, otherwise,
 * 0 if b is Null or the string is invalid (all charcters arent 1 or 0)
 */
unsigned int binary_to_uint(const char *b)
{
	int lenght, i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (lenght = 0; *(b + lenght) != '\0'; lenght++)
	{
		if (!(b[lenght] == '0' || b[lenght] == '1'))
			return (0);
	}

	for (i = 0; *(b + i) != '\0'; i++)
		num += ((*(b + i) - '0') * (1 << (lenght - i - 1)));

	return (num);
}
