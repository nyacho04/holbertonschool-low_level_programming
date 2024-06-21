#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: pointer
 * @src: string
 *
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int nya, n;

	nya = 0;

		while (src[nya] != '\0')
		{
			nya++;
		}
		for (n = 0; n < nya; n++)
		{
			dest[n] = src[n];
		}
		dest[n] = '\0';

		return (dest);
}
