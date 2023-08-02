#include "main.h"
#include <unistd.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String for which length to be return
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')

		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
