#include <stdio.h>
#include "main.h"
/**
* *_strncat - Entry point
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

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

		while (a < n && src[a] != '\0')
		{
			dest[i] = src[a];
			i++;
			a++;
		}

		dest[i] = '\0';
		return (dest);
}
