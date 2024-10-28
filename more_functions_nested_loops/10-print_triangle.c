#include <stdio.h>
#include "main.h"
/**
* print_triangle - This function prints a message.
*
* @size: The size of the triangle.
*
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int fila, espacio, i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (fila = 1; fila <= size; fila++)
	{
		for (espacio = size - fila; espacio > 0; espacio--)
			_putchar(' ');

		for (i = 1; i <= fila; i++)
			_putchar('#');

		_putchar('\n');
	}
}
