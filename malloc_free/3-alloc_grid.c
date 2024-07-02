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
int i;
int a;
	if (width <= 0)
{
	return (NULL);
}
	if (height <= 0)
{
	return (NULL);
}
	nya = (int **)malloc(sizeof(int *) * height);
	if (nya == NULL)
{
	return (NULL);
}
	for (i = 0; i < height; i++)
	free(nya[i]);
	free(nya);
{
	nya[i] = (int *)malloc(width * sizeof(int));
	for (a = 0; a < width ; a++)
{
	nya[i][a] = 0;
}
}
	return (nya);
}
