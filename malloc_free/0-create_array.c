#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: char to c
 *
 * Return: pointer (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *nya;

	unsigned int i = 0;

	if (size == 0)

	return (NULL);

	nya = (char *) malloc(sizeof(char) * size);

	if (nya == NULL)

	return (0);

	while (i < size)

{
	*(nya + i) = c;

	i++;
}
	*(nya + i) = '\0';

	return (nya);
}
