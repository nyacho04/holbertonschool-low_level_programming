#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - This function prints a message.
*
* @grid: The grid to be printed.
*
* @height: The height of the grid.
*
* Return: Nothing.
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	return;

	if (height == 0)
	return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
		free(grid);
}
