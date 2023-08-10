#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * malloc_checked - Returns a pointer to allocated memory
 * @b:parameter for number of bytes
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
