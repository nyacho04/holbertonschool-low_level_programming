#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *_strpbrk - Entry point
*
* @s: string to search
*
* @accept: string containing characters to search for
*
* Description: This function prints a message.
*
* Return: pointer to first occurrence of any of the characters in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
