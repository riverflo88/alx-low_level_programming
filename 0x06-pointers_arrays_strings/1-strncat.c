#include "main.h"

/**
 * _strncat - function to concat two strings
 * @dest: first string to concat
 *@src: second string to concat
 *@n: number of strings to be concated from @src
 *return: the resulting concat string
 */
char *_strncat(char *dest, char *src, int n)
    
{


        int i = 0;
    	int j = 0;
	while (dest[i] != '\0')
    	{
        	i++;
    	}

    	while (src[j] != '\0' &&  j <= (n-1))
    	{
        	dest[i] = src[j];
        	i++;
        	j++;
    	}
    	dest[i] = '\0'; 
   	return (dest);
}

