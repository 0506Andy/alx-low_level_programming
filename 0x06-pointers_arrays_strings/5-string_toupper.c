#include "main.h"
#include <unistd.h>

/**
 * string_toupper - changes lowercase string to uppercase string
 * @s: String to be changed
 * Return: Changed string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
