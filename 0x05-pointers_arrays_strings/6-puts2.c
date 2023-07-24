#include "main.h"
#include <unistd.h>

/**
 * puts2 - Prints every other character on a string
 * @str: Character of string to be printed
 * Return: String
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
