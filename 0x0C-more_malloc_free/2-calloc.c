#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb:number of elements
 * @size:array size
 * Return:pointer otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *nptr;
	void *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		nptr = (unsigned char *) ptr;

	for (i = 0; i < nmemb * size; i++)
		nptr[i] = 0;

	return (ptr);
}
