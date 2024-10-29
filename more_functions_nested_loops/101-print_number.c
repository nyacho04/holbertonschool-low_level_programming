#include <stdio.h>
#include "main.h"
/**
* print_number - This function prints a message.
*
* @n: The number to be printed.
*
* Return: Always 0 (Success)
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
		_putchar((n % 10) + '0');
}
