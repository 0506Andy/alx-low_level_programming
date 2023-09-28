#include "main.h"

/**
 * print_binary - prints the representation of a number
 * @n:number tobe represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size, leading_zeros, i;
	unsigned long int mask;

	size = sizeof(unsigned long int) * 8;
	leading_zeros = 1;

	for (i = size - 1; i >= 0; i--)
	{
		mask = 1UL << i;

		if (n & mask)
		{
			leading_zeros = 0;
			_putchar('1');
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
	}
	if (leading_zeros)
	{
		_putchar('0');
	}
}
