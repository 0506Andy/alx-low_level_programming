#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: Strint to be printed in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')

		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
