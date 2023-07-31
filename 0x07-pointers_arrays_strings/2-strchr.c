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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
