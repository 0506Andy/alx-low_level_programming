#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies string to a buffer
 * @dest: Buffer pointer
 * @src: String pointer
 * Return: Value of dest
 */
char *_strcpy(char *dest, char *src)
{
        char *start = dest;

        while (*src)
        {
                *dest = *src;
                dest++;
                src++;
        }

        *dest = '\0';
        return (start);
}
