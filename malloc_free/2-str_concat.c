#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *str_concat - This function prints a message.
*
* @s1: The first string to be printed.
*
* @s2: The second string to be printed.
*
* Return: A pointer to the array.
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;

	unsigned int i = 0, n = 0, nya = 0, nya2 = 0;

	if (s1 != NULL)
	{
		while (s1[nya] != '\0')
		{
			nya++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[nya2] != '\0')
		{
			nya2++;
		}
	}

	concat = malloc((nya + nya2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; i < nya; i++)
			concat[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (n = 0; n < nya2; n++)
			concat[i + n] = s2[n];
	}
		concat[i + n] = '\0';

	return (concat);

}
