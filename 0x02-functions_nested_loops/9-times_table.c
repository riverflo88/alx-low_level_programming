/**
 * Author: Dr. Okoye C.S
 * File: 9-times_table.c
*/
#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table 
*/
void times_table(void)
{
    int i,j,k;
    i = 0;
    j = 0;
    while (i < 10)
    {
        while (j<10)
        {
            k = i * j;
            
            _putchar((k / 10) + '0');
            if ((k % 10) > 0)
                _putchar((k % 10) + '0');

            _putchar(',');
            _putchar(' ');
        }

        i++;
    }
}
