#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int nya;

	for (nya = 0; nya < n; nya++)
	{
		s[nya] = b;
	}
	return (s);
}
