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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
			i++;
	}
			return (NULL);
}
