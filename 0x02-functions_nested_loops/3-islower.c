/**
 * Author: Dr. Okoye C.S
 * File: 3-islower.c
*/
#include "main.h"
#include <stdio.h>
/**
 * _islower -returns 0 if the input is lowercase or 1 otherwise
*/
int _islower(int c)
{
    if (islower(c))
    {
        return 0;
    }else{
        return 1;
    }
}
