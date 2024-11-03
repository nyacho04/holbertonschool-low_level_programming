#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *string_toupper - Entry point
*
* @nya: The string to be converted
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

char *string_toupper(char *nya)
{
	int i = 0;

	while (nya[i] != '\0')
	{
		if (nya[i] >= 'a' && nya[i] <= 'z')
		{
			nya[i] = nya[i] - ('a' - 'A');
		}
		i++;
	}
	return (nya);
}
