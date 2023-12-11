#include "main.h"
#include <unistd.h>

/**
 * _memcpy - copies bytes from memoer area
 * @dest: Area of memory to be copied to
 * @src: Area of memery to be copied from
 * @n: Bytes from memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *dest_point = dest;

        while (n-- > 0)
        {
                *dest++ = *src++;
        }
        return (dest_point);
}


