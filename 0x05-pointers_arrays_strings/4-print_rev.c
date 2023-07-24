#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints string in reverse
 * @s: String to be printed in reverse
 * Return:string
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
