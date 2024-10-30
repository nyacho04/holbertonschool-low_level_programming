#include <stdio.h>
#include "main.h"
/**
* _strlen - Entry point
*
* @s: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
