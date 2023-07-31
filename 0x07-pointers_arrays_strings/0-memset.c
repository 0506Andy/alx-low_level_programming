#include "main.h"
#include <unistd.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Points to memory area
 * @b: Constant byte
 * @n: Bytes of memory to be fillied
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
