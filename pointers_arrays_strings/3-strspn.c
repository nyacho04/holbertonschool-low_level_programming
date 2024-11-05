#include <stdio.h>
#include "main.h"
/**
* _strspn - Entry point
*
* @s: string to check
*
* @accept: string to check against
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}

		}
	}
	return (len);
}
