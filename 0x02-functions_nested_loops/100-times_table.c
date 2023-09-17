/**
 * Author: Dr. Okoye C.S
 * File: 100-times_table.c
*/
#include "main.h"
#include <stdio.h>
/**
 * 100-times_table -  prints the n times table, starting with 0.
 * @n: number of times table to compute 
 * if n is greater than 15 or less than 0 'break'
*/
void print_times_table(int n)
{
        int i,j,k;

        for(i = 0; i <= n; i++)
        {
                if (n > 15 || n < 0)
                        break;
                for(j = 0; j <= n; j++)
                {
                        k = i * j;
                        if (j == 0)
                                _putchar(k + '0');

                        else if(k < 10 )
                        {
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(k + '0');
                        }
                        else if ((k >= 10) && (k < 100))
                        {
                                _putchar(' ');
                                _putchar(' ');
                                _putchar((k / 10) + '0');
                                _putchar((k % 10) + '0');
                        }
                        else if( k >= 100 )
                        {
                                _putchar(' ');
                                _putchar((k / 100) + '0');
                                _putchar((k /10 ) % 10 + '0');
                                _putchar(((k % 100)) % 10 + '0');
                        }

                }
                        if (j < n)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }

                _putchar('\n');
        }
}

