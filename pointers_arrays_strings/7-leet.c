#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *leet - Entry point
*
* @s: string to be converted
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

char *leet(char *s)
{
	int nya;
	int n;
	char *a = "aAeEoOtTlL";
	char *z = "4433007711";

	for (nya = 0; s[nya] != '\0'; nya++)
	{
	for (n = 0; n < 10; n++)
	{
		if (s[nya] == a[n])
		{
			s[nya] = z[n];
		}
	}
	}
	return (s);
}
