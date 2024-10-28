#include <stdio.h>
#include "main.h"
/**
* print_line - This function prints a message.
*
* @n: The number of times to print a line.
*
* Return: Always 0 (Success)
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
