#include "main.h"
/**
 * print_rev - lelele
 *
 * @s: ueueue
 *
 */
void print_rev(char *s)
{
	int nya, nya2, nya3;

	nya = 0;
		for (nya = 0; s[nya] != '\0'; nya++)
		{
			nya++;
		}

		nya3 = nya;

		for (nya2 = nya3; s[nya2] >= 0; nya2--)
		{
			_putchar(s[nya2]);
		}
_putchar('\n');
}
