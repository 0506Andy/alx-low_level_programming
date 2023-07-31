#include "main.h"
#include <unistd.h>

/**
 * _strstr - Finds firsr occurrence of the substrin
 * @haystack:String to be searched
 * @needle: Substring
 * Return:Pointer to the begging of string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
