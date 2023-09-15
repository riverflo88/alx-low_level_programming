#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
        char i;
        char c;
        c = 1;

        while (c <= 10)
        { 
                for (i = 'a'; i <= 'z'; i++) 

                {
                        _putchar(i);
                        
                }
                c++;
		_putchar('\n');
        }
}
