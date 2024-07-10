#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - exectues a function
 * @array: array
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)

		return;

	for (a = 0; a < size; a++)

	action(array[a]);
}
