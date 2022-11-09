#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array grid
 *
 * @height: height or now
 * @grid: 2D array grid
 *
 * Return: 2D array or NULL if failed to allocate memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; 1 < height; i++)
		free(grid[i]);
	free(grid);
}
