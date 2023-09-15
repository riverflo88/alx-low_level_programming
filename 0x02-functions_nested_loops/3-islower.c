/**
 * Author: Dr. Okoye C.S
 * File: 3-islower.c
*/
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks if an input is lowercase
 * @c: the input to be checked
 *
 * return: 1 if the input is lowercase or 0 otherwise
*/
int _islower(int c)
{
    if (islower(c))
        return 1;
    else
        return 0;
}
