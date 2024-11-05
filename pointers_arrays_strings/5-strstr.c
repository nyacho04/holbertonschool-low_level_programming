#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *_strstr - Entry point
*
* @haystack: string to search
*
* @needle: string to search for
*
* Description: This function prints a message.
*
* Return: pointer to the first occurrence of needle in haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int b;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[i + b] != needle[b])
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
