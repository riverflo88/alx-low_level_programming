#include "main.h"
/**
 * _strcat - function that concats two strings
 * @dest: the first string to be concat
 * @src: the second string to be concat
 * return: a pointer of the concanted string
 */
char *_strcat(char *dest, char *src)
{

    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; 
    return (dest);
        
}
