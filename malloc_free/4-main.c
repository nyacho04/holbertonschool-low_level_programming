#include <stdio.h>

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

int main(void)
{
	int **grid = alloc_grid(3, 2);

	if (grid == NULL)
	{
		printf("Failed allocation of memory\n");
		return (1);
	}

	grid[0][0] = 1;
	grid[1][2] = 5;

	free_grid(grid, 2);

	return (0);
}
