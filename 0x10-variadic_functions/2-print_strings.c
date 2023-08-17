#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints string
 * @separator:string printed between the strings
 * @n:number of strings 
 * Return:string
 */
void print_strings(const char *separator, const unsigned int n, ...);
{
	va_list args;

	unsigned int i;
	char * str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if

}
