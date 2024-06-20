#include "main.h"
/**
 * print_rev - lelele
 *
 * @s: ueueue
 *
 */
void print_rev(char *s)
{
	int nya, nya2;

	nya = 0;
		while (s[nya] != '\0')
		{
			nya++;
		}

		for (nya2 = nya - 1; nya2 != '\0'; nya2--)
		{
			_putchar(s[nya2]);
		}
_putchar('\n');
}
