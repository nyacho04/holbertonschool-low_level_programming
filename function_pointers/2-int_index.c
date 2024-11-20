#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function
 *
 * @array: array
 *
 * @size: size
 *
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function returns 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
