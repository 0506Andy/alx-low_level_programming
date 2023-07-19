#include "main.h"
#include <unistd.h>

/**
 * print_last_digit -Prints the last digit
 *
 * @n: Number to be treated
 *
 * Return:Value of last digit or number
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
