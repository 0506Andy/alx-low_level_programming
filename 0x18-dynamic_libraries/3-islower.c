#include "main.h"
#include <unistd.h>
/**
 * _islower - checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 lowercase character or 0 for any other character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
