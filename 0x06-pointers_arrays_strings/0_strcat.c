#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_strcat(char *dest, char *src)
{

    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    printf("%s\n",dest++);
    printf("%d\n",*(dest+i));
    printf("%s\n",(dest+i));
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; 
    return (dest);
        
}
