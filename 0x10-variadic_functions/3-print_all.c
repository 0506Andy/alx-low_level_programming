#include "variadic_functions.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of all types of args
 * Return:void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i, num;
	char c;
	float f;
	char *s;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] == ('c'))
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if
			(format[i] == ('i'))
			{
				num = va_arg(args, int);
				printf("%d", num);
			}
		else if
			(format[i] == ('f'))
			{
				f = (float)va_arg(args, double);
				printf("%f", f);
			}
		else if
			(format[i] == ('s'))
			{
				{
					s = va_arg(args, char *);
				}
				if (s == NULL)
				printf("(nil)");
				else
					printf("%s", s);
			}
		 if (format == 'c' || format == 'i' || format == 'f' || format == 's')
		 {
			 printf(",");
		 }
		 while (format[i] != '\0')
			 i++;
	}
	va_end(args);
	printf("\n");
}
