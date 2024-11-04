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
	int i;
	int nya;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *z = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (nya = 0; nya < 52; nya++)
		{
			if (s[i] == a[nya])
			{
				s[i] = z[nya];
				break;
			}
		}
	}
	return (s);
}
