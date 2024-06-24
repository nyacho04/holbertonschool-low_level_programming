#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int nya, nya2;

	nya = 0;
	nya2 = 0;

	while (dest[nya] != '\0')
		nya++;

	while (src[nya2] != '\0' && nya2 < n)
	{
		dest[nya] = src[nya2];
		nya++;
		nya2++;
	}
	dest[nya] = '\0';
	return (dest);
}
