#include "main.h"
#include <unistd.h>

/**
 * _strncat - Concatenates two strings
 * @dest:String appended to
 * @src:String Appended
 * @n:Number of bytes needed
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
