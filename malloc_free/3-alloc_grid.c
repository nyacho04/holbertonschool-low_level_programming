#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - creatas an array of ints
 * @width: width
 * @height: height
 * Return: (Success) or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **nya;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	nya = (int **) malloc(sizeof(int *) * height);

	if (nya == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
{
	nya[a] = (int *) malloc(sizeof(int) * width);
	if (!nya[a])
		return (NULL);
{
	free(nya);
	for (b = 0; b <= a; b++)

		return (NULL);
}
	}

	for (a = 0; a < height; a++)
	{
	for (b = 0; b < width; b++)
		{
	nya[a][b] = 0;
	}
}
	return (nya);
}
