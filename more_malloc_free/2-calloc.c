#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_memory - fills memory with a constant byte
 * @a: memory area to be filled
 * @b: char
 * @c: number of times to copy b
 *
 * Return: pointer to a memory
 */
char *_memory(char *a, char b, unsigned int c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		a[i] = b;
	}

	return (a);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memory(ptr, 0, nmemb * size);

	return (ptr);
}
