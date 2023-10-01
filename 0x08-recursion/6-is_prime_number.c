#include "main.h"

int actual_pri(int n, int i);

/**
 * is_prime_number - if the input integer is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_pri(n, n - 1));
}

/**
 * actual_pri - calculates if a number is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_pri(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_pri(n, i - 1));
}
EOF 
cat <<EOF > 100-is_palindrome.c
#include "main.h"

int _strlen_recursion(char *s);
int help_chack_pal(char *s, int i, int len);

/**
 * is_palindrome - check if string is palindrome
 * @s: string input
 *
 * Return: 0 it is not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (help_chack_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that chack if s is a palindrome string
 * @s: An input tsring
 * Return: i if is a string palindrome or  0 in otherwise
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * help_chack_pal - A function with a revesed string
 * @s: an input string
 * @len:length of string
 * @i: iterator
 * Return: reverse string
 */
int help_chack_pal(char *s, int i,  int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (help_chack_pal(s, i + 1, len - 1));
}
