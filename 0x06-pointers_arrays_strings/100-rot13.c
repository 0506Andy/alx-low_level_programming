#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rot13 - encodes a string using rot13
 * @str: String to be encoded
 * Return: str
 */
char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str[i]; i++)
	{
		c = str[i];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			str[i] = (c - 'A' < 26 ? 'A' : 'a') + ((c - 'A' + 13) % 26);
		}
	}
	return (str);
}
