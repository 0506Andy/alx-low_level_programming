#include "main.h"

/**
 * set_bit -sets the value of a bit to 1 at a given index
 * @n:pointer to be set
 * @index:index to set
 * Return: 1 (success) or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
