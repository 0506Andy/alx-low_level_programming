#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * puts_half - Prints half a string
 * @str: String to be printed
 * Return: Half string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int n = (length - 1) / 2;
	int start = length % 2 == 0 ? length / 2 : n + 1;
	int i;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
