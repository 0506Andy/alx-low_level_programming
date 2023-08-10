#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * copy_range - to copy string
 * @dest:String to be copied to
 * @src:String to be copied
 * @n:bytes required
 * Return:void
 */
void copy_range(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != ('\0'); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = ('\0');
	}
}

/**
 * copy_memory - copies memory
 * @dest:copied to
 * @src:pointer
 * @n:bytes required
 * Return:void
 */
void copy_memory(void *dest, const void *src, int n)
{
	char *dest_ptr;
	const char *src_ptr;
	int i;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;

	for (i = 0; i < n; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}
}

/**
 * _realloc - reallocates a memory block
 * @ptr:pointer to be reallocated
 * @old_size:old size of memory block
 * @new_size:new size of memory block
 * Return:NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (ptr != NULL)
	{
		copy_memory(new_ptr, ptr, old_size);

		free(ptr);
	}
	return (new_ptr);
}
