#include <stdio.h>
#include "main.h"
/**
* print_diagonal - This function prints a message.
*
* @n: The number of times to print a line.
*
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
