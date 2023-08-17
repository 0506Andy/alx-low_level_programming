#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers passed
 * Return:numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int s;
	unsigned int i;

	if (separator == NULL)
		printf("%s", separator);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
		printf("%d", s);

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
