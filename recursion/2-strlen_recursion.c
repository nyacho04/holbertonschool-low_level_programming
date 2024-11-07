#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion - This function prints a message.
*
* @s: The string to be printed.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		else
		{
			return (1 + _strlen_recursion(s + 1));
		}
}
