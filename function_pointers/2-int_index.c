#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: arry
 * @size: size
 * @cmp: pointer for function
 * Return: index for the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)

				return (a);
		}
	}
	return (-1);
}
