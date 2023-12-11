#include "main.h"
#include <unistd.h>
/**
 * _strncpy - Copies string
 * @dest:To be copy to
 * @src:String to be copied
 * @n:Amount of space required
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];
        for ( ; i < n; i++)
                dest[i] = '\0';

        return (dest);
}


