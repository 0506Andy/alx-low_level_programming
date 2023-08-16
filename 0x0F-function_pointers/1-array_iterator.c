#include "function_pointers.h"
#include <unistd.h>
#include <stdio.h>

/**
 * array_iterator - executes a func give parameter of an array
 * @array: given array
 * @size: size of array to print
 * @action: pointer to the funcion to print
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
