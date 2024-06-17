#include "main.h"
/**
 * print_alphabet_x10 - Check
 * Description: function uses _putchar function to print
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char nya;
	int nya2;

	for (nya2 = 0; nya2 < 10; nya2++)
	{
		for (nya = 'a'; nya <= 'z'; nya++)
		{
			_putchar(nya);
		}
			_putchar('\n');
	}
}

