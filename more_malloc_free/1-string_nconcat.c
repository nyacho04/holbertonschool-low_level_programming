#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - This function prints a message.
*
* @s1: The first string
*
* @s2: The second string
*
* @n: The number of bytes to print
*
* Return: The concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, b = 0, k = 0, nya1 = 0, nya2 = 0;

	char *str;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	while (s1[nya1])
		nya1++;

	while (s2[nya2])
		nya2++;

	if (n > nya2)
		n = nya2;

	str = malloc((nya1 + n + 1) * sizeof(char));

	if (!str)
	{
		return (NULL);
	}

	while (s1[i])
	{
		str[k++] = s1[i++];
	}

	while (b < n)
	{
		str[k++] = s2[b++];
	}

	str[k] = '\0';

	return (str);
}
