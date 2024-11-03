#include <stdio.h>
#include "main.h"
/**
* _strcmp - Entry point
*
* @s1: first string
*
* @s2: second string
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

int _strcmp(char *s1, char *s2)
{
	int  i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
		}
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
}
