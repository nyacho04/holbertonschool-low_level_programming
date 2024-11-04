#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *rot13 - Entry point
*
* @s: string to be converted
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

char *rot13(char *s)
{
	int nya;
	int n;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *z = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (nya = 0; s[nya] != '\0'; nya++)
	{
	for (n = 0; a[n] != '\0'; nya++)
	{
		if (s[nya] == a[n])
		{
			s[nya] = z[n];
		}
	}
	}
	return (s);
}
