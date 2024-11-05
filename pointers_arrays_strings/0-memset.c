#include <stdio.h>
#include "main.h"
/**
* *_memset - Entry point
*
* @s: pointer to the memory area
*
* @b: character to fill the memory area
*
* @n: number of bytes to fill
*
* Description: This function prints a message.
*
* Return: pointer to the destination string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
