#include <stdio.h>
#include "main.h"
/**
* _print_rev_recursion - This function prints a message.
*
* @s: The string to be printed.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		}
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
