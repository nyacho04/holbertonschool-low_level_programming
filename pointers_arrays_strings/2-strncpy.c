#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int nya;

	nya = 0;

	while (src[nya] != '\0' && nya < n)
	{
		dest[nya] = src[nya];
		nya++;
	}

	while (nya < n)
	{
		dest[nya] = '\0';
		nya++;
	}

	return (dest);
}
