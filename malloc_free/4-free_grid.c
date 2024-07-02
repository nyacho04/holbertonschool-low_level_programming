#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - frees the memory allocated
 * @grid: grid
 * @height: height of grid
 *
 * Return - void
 */
void free_grid(int **grid, int height)
{
	int nya;

	if (grid == NULL || height == 0)

	return;

	for (nya = 0; nya < height; nya++)

	free(grid[nya]);

	free(grid);
}
