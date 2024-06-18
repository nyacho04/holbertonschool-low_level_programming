#include "main.h"
/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int nya;

if (n > 0)
{
	for (nya = 0; nya < n; nya++)
		_putchar('_');
}
	_putchar('\n');
}
