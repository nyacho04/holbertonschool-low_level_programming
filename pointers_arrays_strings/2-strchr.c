#include <stdio.h>
#include "main.h"
/**
* *_strchr - Entry point
*
* @s: string to search
*
* @c: character to search for
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
