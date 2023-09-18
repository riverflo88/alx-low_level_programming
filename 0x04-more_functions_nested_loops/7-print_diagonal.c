#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of diagonals to be drawn
 * return: 0 
*/

void print_diagonal(int n)
{   
    
    int i,j;
    for (int i = 0; i < n; i++)
    {
        if (n <= 0)
            {
                _putchar('\n');
                break;
            }

        for (int j = 0; j< n; j++)
        {
            if (i==j)
                _putchar('\\');
            else 
                _putchar(' ');
             _putchar('\n');
        }
       

    }
    
}

