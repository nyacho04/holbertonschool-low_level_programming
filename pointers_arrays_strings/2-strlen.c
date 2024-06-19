#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int nya;

	nya = 0;

	while (s[nya] != '\0')
	{
		nya++;
	}
	return (nya);
}
