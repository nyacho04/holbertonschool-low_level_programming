#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int nya, nya2;

	if (n <= 0)
	{
		_putchar('\n');
			return;
		{
			for (nya = 0; nya < n; nya++)
			{
				for (nya2 = 0; nya2 < nya; nya2++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
