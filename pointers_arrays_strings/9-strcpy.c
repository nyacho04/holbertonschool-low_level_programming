#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *_strcpy - Entry point
*
* @dest: array of integers
*
* @src: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

char *_strcpy(char *dest, char *src)
{
	int nya = 0;

	while (src[nya] != '\0')
	{
		dest[nya] = src[nya];
		nya++;
	}
		dest[nya] = '\0';

		return (dest);
}
