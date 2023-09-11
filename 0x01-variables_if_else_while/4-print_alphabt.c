#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}
EOF 
#!/bin/bash
cat <<EOF > 5-print_numbers.c
#include <stdio.h>

/**
* main - Print all single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
