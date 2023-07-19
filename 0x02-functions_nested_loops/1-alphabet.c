#include "main.h"

/**
 * print_alphabet -Print alphabet in low caps
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar ('\n');
}
