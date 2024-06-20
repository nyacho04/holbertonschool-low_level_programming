#include "main.h"
/**
 * puts2 - mala noticia mi gente
 * @str: esta es la mala noticia
 */
void puts2(char *str)
{
	int nya, nya2;

	nya = 0;

		while ((str[nya]) != '0')
		{
			nya++;
		}
		for (nya2 = 0; nya2 < nya; nya2 += 2)
		{
			_putchar(str[nya2]);
		}
		_putchar('\n');
}
