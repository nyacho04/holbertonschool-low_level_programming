#include <stdio.h>
#include "main.h"
/**
* _puts - Entry point
*
* @str: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
		_putchar('\n');

}
