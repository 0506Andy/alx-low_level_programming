#include "main.h"
#include <unistd.h>

/**
 * puts2 - Prints every other character on a string
 * @str: Character of string to be printed
 * Return: String
 */
void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *f = str;
	int h;

	while (*f != '\0')
	{
		f++;
		longi++;
	}
	x = longi - 1;

	for (h = 0; h <= x; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
