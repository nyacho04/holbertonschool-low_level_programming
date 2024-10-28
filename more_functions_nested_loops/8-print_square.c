#include <stdio.h>
#include "main.h"
/**
* print_square - This function prints a message.
*
* @size: The number of times to print a line.
*
* Return: Always 0 (Success)
*/
void print_square(int size)
{
	int i, a;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
