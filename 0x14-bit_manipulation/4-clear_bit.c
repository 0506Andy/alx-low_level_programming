#include "main.h"

/**
 * clear_bit - sets values to zero at given index
 * @n:pointer to value to set to zero
 * @index: index tobit to set to zero
 * Return:1 (Success) otherwise -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned long int make;

	size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}
	make = ~(1UL << index);

	*n &= make;

	return (1);
}
