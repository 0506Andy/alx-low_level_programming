#include "main.h"
#include <unistd.h>

/**
 * print_times_table -Prints the times table of n
 * @n: Value of the table to be printed
 * Return:void
 */
void print_times_table(int n)
{
	int x, y, prod;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				prod = x * y;
				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				{
					else if ((prod <= 99) && (prod >= 10))
				{
			_putchar((prod / 10) + '0');
				}
		_putchar((prod % 10) + '0');
			}
	_putchar('\n');
		}
	}
}
}
