#include <stdio.h>
#include "main.h"
/**
* times_table - This function prints a message.
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
				_putchar(product + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
