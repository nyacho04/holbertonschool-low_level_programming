#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - This function prints a message.
*
* @s: The string to be printed.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
