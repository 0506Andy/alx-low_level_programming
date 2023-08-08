#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height of grid
 * Return:void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
