#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dim arr of int
 * @width:width of grid
 * @height:height of grid
 * Return: NULL otherwise pointer
 */
int **alloc_grid(int width, int height)
{
	int **allo;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	allo = (int **)malloc(height * sizeof(int *));
	if (allo == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		allo[i] = malloc(width * sizeof(int));
	if (allo[i] == NULL)
	{
		for (j = 0; j < i; j++)
			free(allo[j]);
		free(allo);
		return (NULL);
	}
	}
	return (allo);
}
