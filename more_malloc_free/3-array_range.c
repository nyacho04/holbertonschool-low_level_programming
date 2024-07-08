#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int a, s;
	int *ptr;

	if (min > max)
		return (NULL);
	s = max - min + 1;

	ptr = malloc(sizeof(int) * s);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
