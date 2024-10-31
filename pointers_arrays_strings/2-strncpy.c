#include <stdio.h>
#include "main.h"
/**
* *_strncpy - Entry point
*
* @dest: destination string
*
* @n: number of bytes to copy
*
* @src: source string
*
* Description: This function prints a message.
*
* Return: pointer to the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

		for (; i < n; i++)

		dest[i] = '\0';
		return (dest);
}
