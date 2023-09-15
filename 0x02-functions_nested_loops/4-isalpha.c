/**
 * Author: Dr. Okoye C.S
 * File: 4-isalpha.c
*/
#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Checks if char input is an alphabet
 * @c: the character to be checked
 * 
 * Return: 1 if the input is an alphabet or 0 otherwise
*/
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || 
        (c >= 'A' && c <= 'Z'))
        return 1;
    else
        return 0;
}
