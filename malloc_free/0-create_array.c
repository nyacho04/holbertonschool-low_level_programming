#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *create_array - This function prints a message.
*
* @c: The size of the array.
*
* @size: The size of the array.
*
* Return: A pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0)

		return (NULL);

	if (array == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
		return (array);
}
