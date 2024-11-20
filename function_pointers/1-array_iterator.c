#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function
 *
 * @array: array
 *
 * @size: size
 *
 * @action: action
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
