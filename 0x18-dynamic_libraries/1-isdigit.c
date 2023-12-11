#include "main.h"

/**
 * _isdigit - Check for a digit
 * @c: Number to be checked
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
