/**
 * Author: Dr. Okoye C.S
 * File: 9-times_table.c
*/
#include "main.h"
#include <stdio.h>
/**
 * times_table -  prints the 9 times table 
*/
void times_table(void)
{
    int i,j,k;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            k = i * j;
            if((k / 10) != 0)
                _putchar((k / 10) + '0');
            else if (k != 0)
                _putchar(' ');
            if ((k % 10) > 0)
                _putchar((k % 10) + '0');
            else
                _putchar('0');
            if (j < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}