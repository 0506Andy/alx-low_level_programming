#include "main.h"
#include <unistd.h>

/**
 * _strchr - Returns the pointer to first occurance of character
 * @s: String to be scanned
 * @c: Character where the pointer is to be returned
 * Return: NULL or Pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
