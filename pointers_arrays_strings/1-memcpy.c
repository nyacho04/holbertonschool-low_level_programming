#include "main.h"
/**
 * *_memcpy - copies memory
 * @dest: destination memory
 * @src: memory area
 * @n: number
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int nya;

	for (nya = 0; nya < n; nya++)
	{
		dest[nya] = src[nya];
	}
	return (dest);
}
