#include "main.h"
#include <unistd.h>

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: Character to be checked
 *
 * Return: 1 for alphabetic character ot 0 for other characters
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
