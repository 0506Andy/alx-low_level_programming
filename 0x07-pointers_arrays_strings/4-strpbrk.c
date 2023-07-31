#include "main.h"
#include <unistd.h>

/**
 * _strpbrk - Locates the first occurance of string
 * @s: String to belocated
 * @accept: String to be searched
 * Return: Pointer to s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
