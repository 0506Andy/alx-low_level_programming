#include "main.h"
#include <unistd.h>

/**
 * puts2 - Prints every other character on a string
 * @str: Character of string to be printed
 * Return: String
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != ('\0'); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
