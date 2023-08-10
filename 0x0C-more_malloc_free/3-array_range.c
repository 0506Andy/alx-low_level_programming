#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * array_range - creates an array an integers
 * @min:smallest integers to start with
 * @max:biggess integers to end with
 * Return:pointer otherwise NULL
 */
int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		range[i] = min + i;

	return (range);
}
