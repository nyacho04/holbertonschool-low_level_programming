#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *_calloc - This function prints a message.
*
* @nmemb: The number of elements.
*
* @size: The size of each element.
*
* Return: A pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

		return (ptr);
}

