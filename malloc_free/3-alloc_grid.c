#include <stdio.h>
#include <stdlib.h>
/**
* **alloc_grid - This function prints a message.
*
* @width: The width of the grid.
*
* @height: The height of the grid.
*
* Return: A pointer to a 2D array of integers.
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int n;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (n = 0; n < i; n++)
				free(grid[n]);
				free(grid);

			return (NULL);
		}
		for (n = 0; n < width; n++)
			grid[i][n] = 0;
	}

	return (grid);
}
