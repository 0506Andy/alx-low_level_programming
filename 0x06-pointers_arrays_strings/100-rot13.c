#include "main.h"
#include <unistd.h>
/**
 * rot13 - encodes a string using rot13
 * @str: String to be encoded
 * Return: str
 */
char *rot13(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
		{
			*s = *s + 13;
		}
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
		{
			*s = *s - 13;
		}
		s++;
	}
	return (str);
}
