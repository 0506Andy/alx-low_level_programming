#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - encode a string into 1337
 * @s:String to be encoded
 * Return:s
 */
char *leet(char *s)
{
	int i, j;
	char *leet_table[] = {"4", "3", "0", "7", "1"};
	char *letters[] = {"aA", "eE", "oO", "tT", "lL"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (strchr(letters[j], s[i]))
			{
				s[i] = leet_table[j][0];
			}
		}
	}
	return (s);
}
