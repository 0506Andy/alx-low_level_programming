#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string
 * @str: String to be printed
 * Return:str
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
        }
        _putchar('\n');
}


