#include "main.h"
/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int nya;
	int nya2;

	if (size > 0)
	{
		for (nya = 0; nya < size; nya++)
		{
			for (nya2 = 0; nya2 < size; nya2++)
				_putchar('#');

			if (nya == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
