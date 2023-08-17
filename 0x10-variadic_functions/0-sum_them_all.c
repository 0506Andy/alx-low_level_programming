#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Returns the sum of all parameters
 * @n: constant integer
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int x = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x += va_arg(args, int);
	}
	va_end(args);
	return (x);
}
