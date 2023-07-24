#include "main.h"
#include <unistd.h>

/**
 * _strlen - Return length os a string
 * @s: Length of string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
