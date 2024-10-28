#include <stdio.h>
#include "main.h"
/**
* times_table - This function prints a message.
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int i, j, producto;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			producto = i * j;
			if (j == 0)
				_putchar(producto + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (producto < 10)
					_putchar(' ');
				_putchar(producto + '0');
			}
		}
		_putchar('\n');
	}
}
