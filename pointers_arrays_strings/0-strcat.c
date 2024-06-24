#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int nya, nya2;

	nya2 = 0;
	nya = 0;

	for (nya = 0; dest[nya] != '\0'; nya++)

	while (src[nya2] != '\0')
	{
		dest[nya] = src[nya2];

		nya2++;
		nya++;
	}
	dest[nya] = '\0';

	return (dest);
}
