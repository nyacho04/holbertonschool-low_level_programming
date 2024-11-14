#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *array_range - This function prints a message.
*
* @min: The number of elements of the array.
*
* @max: The maximum value of the array.
*
* Return: Nothing.
*/

int *array_range(int min, int max)
{
	int *array;
	int size, n;

	size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		array[n] = min + n;
	}

	return (array);
}
