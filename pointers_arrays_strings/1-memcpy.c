#include <stdio.h>
#include "main.h"
/**
* *_memcpy - Entry point
*
* @dest: destination string
*
* @n: number of bytes to fill
*
* @src: source string
*
* Description: This function prints a message.
*
* Return: pointer to the destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
