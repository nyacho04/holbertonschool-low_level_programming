#include "main.h"
/**
 * puts_half - mala noticia mi gente
 * @str: esta e la mala noticia
 */
void puts_half(char *str)
{
	int nya, n, i;

	nya = 0;

	while (str[nya] != '\0')
	{
		nya++;
	}

	if (nya % 2 == 0)
	{
		for (i = nya / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (nya % 2)
	{
		for (n = (nya - 1) / 2; n < nya - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
