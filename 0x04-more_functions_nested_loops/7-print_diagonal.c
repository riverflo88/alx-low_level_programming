#include "main.h"

/**
 * print_diagonal-a function that draws a diagonal line on the terminal
 * @n: the number of times the character \
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		{
			if (n <= 0)
				break;
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		_putchar('\n')
	}
}
