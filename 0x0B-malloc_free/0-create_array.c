#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * create_array - Creates array of chars
 * @c:number of elements
 * @size: size of elements
 * Return:Null or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
