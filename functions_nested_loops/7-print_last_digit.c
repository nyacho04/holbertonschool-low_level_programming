#include <stdio.h>
#include "main.h"
/**
* print_last_digit - This function prints a message.
*
* @n: The character to be checked
*
* Return: Always 0 (success)
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
