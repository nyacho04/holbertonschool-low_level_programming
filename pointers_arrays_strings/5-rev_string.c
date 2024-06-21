#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int nya, nya2, nya3;
	char tk;

	nya2 = 0;
	nya3 = 0;

	while (s[nya2] != '\0')
	{
		nya2++;
	}
	nya3 = nya2 - 1;

	for (nya = 0; nya < nya2 / 2; nya++)
	{
		tk = s[nya];
		s[nya] = s[nya3];
		s[nya3--] = tk;
	}
}
