#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer representing the number
 * @index: index to retrieve
 * Return: value of the bit at index otherwise -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;
	unsigned long int make, smallest_bit;

	size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}
	make = 1UL << index;
	smallest_bit = (n & make) ? 1 : 0;

	return (smallest_bit);
}
