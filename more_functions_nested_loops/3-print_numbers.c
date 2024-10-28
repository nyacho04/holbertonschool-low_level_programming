#include <stdio.h>
#include "main.h"
/**
* print_numbers - This function prints a message.
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
	char numbr;

	for (numbr = '0'; numbr <= '9'; numbr++)
	{
		_putchar(numbr);
	}
	_putchar('\n');
}
