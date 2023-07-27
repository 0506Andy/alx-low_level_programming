#include "main.h"
#include <unistd.h>

/**
 * _strcmp - Compares two strings
 * @s1:String to be compared
 * @s2:String to be compared
 * Return:(s1[i] - s2[i])
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
