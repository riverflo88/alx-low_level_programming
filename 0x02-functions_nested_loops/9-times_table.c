/**
 * Author: Dr. Okoye C.S
 * File: 4-isalpha.c
*/
#include "main.h"
#include <stdio.h>
/**
 * times_table -  prints the 9 times table 
*/
void times_table(void)
{
    int i,j,k;
    i = 0;
    j = 0;
    for  (i; i < 10; i++)
    {
        for  (j; j < 10; j++)
        {
            k = i * j;
            
            _putchar((k / 10) + '0');
            if ((k % 10) > 0)
                _putchar((k % 10) + '0');

            _putchar(',');
            _putchar(' ');
        }
    }
}
