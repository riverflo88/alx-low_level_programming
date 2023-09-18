
EOF#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,then a new line
 * @s: pointer to be prited
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}


cat <<EOF > 5-rev_string.c
#include "main.h"

/**
 * rev_string - revers a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
