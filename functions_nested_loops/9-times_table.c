#include <stdio.h>
#include "main.h"
/**
* times_table - This function prints a message.
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int i, a, n;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			n = a * i;

			if (a == 0)
			{
				_putchar(n + '0');
			}

			if (n < 10 || a != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			} else if (n >= 10)

			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
