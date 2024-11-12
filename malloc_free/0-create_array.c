#include <stdio.h>
#include <stdlib.h>
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

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
		return (array);
}
