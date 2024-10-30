#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* puts2 - Entry point
*
* @str: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
