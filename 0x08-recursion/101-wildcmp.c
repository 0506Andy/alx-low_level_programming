#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1:String parameter pointer
 * @s2:String pointer
 * Return: 1 if identical,0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
