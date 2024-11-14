#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - This function prints a message.
*
* @b: The number of bytes to allocate.
*
* Return: A pointer to the array.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
		return (ptr);
}
