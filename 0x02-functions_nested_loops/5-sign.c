#include "main.h"
#include <unistd.h>

/**
 * print_sign - Prints the sign of a number
 *
 * @n: Number to be checked
 *
 * Return: 1 for (+) number , - 1 for (-) number or 0 for any other character
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
