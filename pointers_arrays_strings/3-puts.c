#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to be printed
 */
void _puts(char *str)
{
	int nya;
		for (nya = 0; str[nya] != '\0'; nya++)
		{
			_putchar(str[nya]);
		}
		_putchar('\n');
}
